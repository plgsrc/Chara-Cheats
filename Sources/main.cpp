#include "3ds.h"
#include "cheats.hpp"
#include "csvc.h"
#include "additionals.cpp"
#include "CTRPluginFramework.hpp"

#include <vector>

namespace CTRPluginFramework
{
    
    static MenuEntry *AddArg(void *arg, MenuEntry *entry)
    {
        if (entry != nullptr)
            entry->SetArg(arg);
        return (entry);
    }
	
    static MenuEntry *EntryWithHotkey(MenuEntry *entry, const Hotkey &hotkey)
    {
        if (entry != nullptr)
        {
            entry->Hotkeys += hotkey;
            entry->SetArg(new std::string(entry->Name()));
            entry->Name() += " " + hotkey.ToString();
            entry->Hotkeys.OnHotkeyChangeCallback([](MenuEntry *entry, int index)
            {
                std::string *name = reinterpret_cast<std::string *>(entry->GetArg());

                entry->Name() = *name + " " + entry->Hotkeys[0].ToString();
            });
        }
        return (entry);
    }
	
    static MenuEntry *EntryWithHotkey(MenuEntry *entry, const std::vector<Hotkey> &hotkeys)
    {
        if (entry != nullptr)
        {
            for (const Hotkey &hotkey : hotkeys)
                entry->Hotkeys += hotkey;
        }
        return (entry);
    }
	
    static MenuEntry *EnableEntry(MenuEntry *entry)
    {
        if (entry != nullptr)
        {
            entry->SetArg(new std::string(entry->Name()));
            entry->Enable();
        }
		return (entry);
    }
	
	static MenuEntry *AddText(std::string str)
	{
		return new MenuEntry(str,nullptr);
	}
	
    void    InitMenu(PluginMenu &menu)
    {
		
		MenuFolder *chara = new MenuFolder("" << Color::Yellow << "Chara's Cheat Codes","PLG使用者向け");
		*chara += new MenuFolder( "" << Color::Cyan << "モーションコード", "プレイヤーモーション",
        {
	    new MenuEntry( "" << Color::Yellow << "モーション", nullptr ,aaaaaaaInventoryModifier),
		EntryWithHotkey(new MenuEntry( "" << Color::Cyan << "回転モーション", longitudinal, "自分でKeyを設定してください。"),{ Hotkey(Key::L, "回転モーション") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Cyan << "くらげモーション", jellyfishstruggle, "自分でKeyを設定してください。"),{ Hotkey(Key::R, "くらげモーション") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Cyan << "キノコモーション", famousmushroom, "自分でKeyを設定してください。"),{ Hotkey(Key::X, "キノコモーション") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Cyan << "空気ベッド", airbed, "自分でKeyを設定してください。"),{ Hotkey(Key::X, "空気ベッド") }), 
		EntryWithHotkey(new MenuEntry( "" << Color::Cyan << "空気椅子", airchair, "自分でKeyを設定してください。"),{ Hotkey(Key::X, "空気椅子") }),  
		EntryWithHotkey(new MenuEntry( "" << Color::Cyan << "尻餅", kokeru, "自分でKeyを設定してください。"),{ Hotkey(Key::B + Y, "尻餅") }), 
		
	    });
	
	*chara += new MenuFolder( "" << Color::Cyan << "ピットモーション", "穴に落ちるモーションなど",
     {
		new MenuEntry( "" << Color::Orange << "足跡落とし穴", immediatepitfall, "インベントリー開いてB十字下押して閉じる。"),
		new MenuEntry( "" << Color::Orange << "泳ぐ",swiming ,"B + Y"),
		new MenuEntry( "" << Color::Orange << "ツアースコアカンスト", tourscore, "B + DU.\n虫取りや魚取り、海の幸のときのみ使用可能。"),
    });
	
	*chara += new MenuFolder( "" << Color::Red << "動作コード", "",
	 {
	    new MenuEntry( "" << Color::Red << "座標移動", coord, "A＋十字キー"),
		new MenuEntry( "" << Color::Red << "Cキー版座標移動", Ccoord, "A＋スライドパット"),
		new MenuEntry( "" << Color::Red << "Anti Gravity", antiGravity, "ON:L + DU.\nOFF: L + DD."),
		new MenuEntry( "" << Color::Red << "オンラインムーンジャンプ", Online, "UP R + DU.\nDown R + DD."),
		new MenuEntry( "" << Color::Red << "スピードハック", speed, "B."),
		new MenuEntry( "" << Color::Red << "壁貫通", Wallkantu, "ON:L + DU.\nOFF: L + DD."),
		new MenuEntry( "" << Color::Red << "村のアイテム全消去", deleteall, "R+Aでできる"),
		new MenuEntry( "" << Color::Red << "下にあるものコピー", real, "なまえでないやつもB+DDでできる\n村内だけ、島非対応"),
		EntryWithHotkey(new MenuEntry( "" << Color::Red << "黒いの！", Black, "自分でKeyを設定してください。"),{ Hotkey(Key::X, "黒いの！") }),
	});
    MenuFolder *items = new MenuFolder("" << Color::Yellow << "変更チート","変更系チート");
	*items += new MenuFolder( "" << Color::Blue << "プレイヤー設定", "設定変更",
	 {
	    new MenuEntry( "" << Color::Yellow << "ツールチェンジャー", nullptr ,aaaaaInventoryModifier),
		new MenuEntry( "" << Color::Yellow << "ルームチェンジャー", nullptr ,aaaInventoryModifier),
		new MenuEntry( "" << Color::Yellow << "引き取りBox機能変更", nullptr ,aaaaaaaaInventoryModifier),
		new MenuEntry( "" << Color::Yellow << "性別変更", nullptr ,seibnetu),
		new MenuEntry( "" << Color::Yellow << "国籍変更", nullptr ,kokuseki),
		new MenuEntry( "" << Color::Yellow << "プレイヤー変更", nullptr ,p),
		new MenuEntry( "" << Color::Yellow << "天気変更", nullptr ,wether),
		new MenuEntry( "" << Color::Blue << "自宅化", aaabc),
        new MenuEntry( "" << Color::Blue << "名前変更", Playername, "Y + DD."),
		new MenuEntry( "" << Color::Blue << "村名変更", Villagename, "Y + DD."),
		new MenuEntry( "" << Color::Blue << "花散らさない", FDB, "ON: R + DPadUp.\nOFF: R + DPadDown."),
		new MenuEntry( "" << Color::Blue << "花散らす", frower, "B + Y"),
		new MenuEntry( "" << Color::Blue << "写真バグ", sopaka, "写真機で写真を撮ったときバグります"),
		new MenuEntry( "" << Color::Blue << "何でも拾う", toreru, "ON: Y + DPadUp.\nOFF: Y + DPadDown."),
		new MenuEntry( "" << Color::Blue << "歩いたところのオブジェクト消去", aruku, "ON: R + DPadUp.\nOFF: R + DPadDown."),
		new MenuEntry( "" << Color::Blue << "他人のマイデザ変更", maideza, "ON: A.\nOFF: B.\n悪用禁止"),
    });

	*items += new MenuFolder( "" << Color::DodgerBlue << "大きさ系、その他", "大きさ系変更チート、その他もろもろ",
     {
		new MenuEntry( "" << Color::DodgerBlue << "頭の大きさ変更", headsize),
		new MenuEntry( "" << Color::DodgerBlue << "大きさ変更", playersizechanger, "Up R + DU.\nDown R + DD.\n元の大きさ R + DL."),
		new MenuEntry( "" << Color::DodgerBlue << "視野変更", camera),
		new MenuEntry( "" << Color::DodgerBlue << "みせびらかし変更　外", show),
		new MenuEntry( "" << Color::DodgerBlue << "みせびらかし変更　室内", shown),
		new MenuEntry( "" << Color::DodgerBlue << "アクセサリーサイズ変更", AccessoriesSize),
		new MenuEntry( "" << Color::DodgerBlue << "帽子のサイズ変更", Hatsize),
		new MenuEntry( "" << Color::DodgerBlue << "建物サイズ変更", BuildingSize),
		new MenuEntry( "" << Color::DodgerBlue << "エフェクトサイズ変更", Big),
		new MenuEntry( "" << Color::DodgerBlue << "カービィ", head2,"B+Yで体がカービィになり、DR+Yで解除"),
		new MenuEntry( "" << Color::DodgerBlue << "木の大きさ変更", uddo),
		
		
    });
	*items += new MenuFolder( "" << Color::Green << "時間系変更", "時間系変更",
    {
		new MenuEntry( "" << Color::Green << "時間変更", timetravel, "B+十字右左で時を爆速変更\nR+十字右左で分を爆速変更"), 
    });
	*items  += new MenuFolder( "" << Color::Yellow << "ソパカ内容変更", "",
    {
		new MenuEntry( "" << Color::Yellow << "夢番地　上四桁", dream1), 
		new MenuEntry( "" << Color::Yellow << "夢番地　中四桁", dream2),
		new MenuEntry( "" << Color::Yellow << "夢番地　下四桁", dream3),
		new MenuEntry( "" << Color::Yellow << "年", nen),
		new MenuEntry( "" << Color::Yellow << "月", tuki),
		new MenuEntry( "" << Color::Yellow << "日", hi),
		new MenuEntry( "" << Color::Yellow << "誕生月", tantuki),
		new MenuEntry( "" << Color::Yellow << "誕生日", tanday),
	});
		
    *items  += new MenuFolder( "" << Color::Yellow << "柄変更", "",
	{
        new MenuEntry( "" << Color::Yellow << "黒", aaaaa),
        new MenuEntry( "" << Color::Yellow << "グラデーション", aaaab),
        new MenuEntry( "" << Color::Yellow << "サイドカラー", aaaac),
        new MenuEntry( "" << Color::Yellow << "光", aaaae),
    });

	
	*items += new MenuFolder( "" << Color::Blue << "服変更", "",
    {
		new MenuEntry( "" << Color::Blue << "帽子", head), 
		new MenuEntry( "" << Color::Blue << "アクセサリー", Accessories),
		new MenuEntry( "" << Color::Blue << "シャツ", Shirt),
		new MenuEntry( "" << Color::Blue << "ズボン", Pants),
		new MenuEntry( "" << Color::Blue << "靴下", sox),
		new MenuEntry( "" << Color::Blue << "靴", shoes),
    });
	
	*items += new MenuFolder( "" << Color::Red << "ドアのモーション変更", "",
    {
		new MenuEntry( "" << Color::Red << "リセット監視センター", Reset), 
		new MenuEntry( "" << Color::Red << "デパート", depart),
		new MenuEntry( "" << Color::Red << "ドア", dooropen),
		new MenuEntry( "" << Color::Red << "写真機", shotopen),
    });
	
	*items += new MenuFolder( "" << Color::Cyan << "家のパーツ変更", "",
     {
	    new MenuEntry( "" << Color::Yellow << "ドア", nullptr ,door3 ),
		new MenuEntry( "" << Color::Yellow << "ポスト", nullptr ,post ),
		new MenuEntry( "" << Color::Yellow << "フェンス", nullptr ,fence ),
		new MenuEntry( "" << Color::Yellow << "敷石", nullptr ,sikiisi ),
	});
	*chara += items;
	*chara  += new MenuFolder( "" << Color::Yellow << "Nookling Upgrades", "",
	{
        new MenuEntry( "" << Color::Yellow << "T&T Mart", nook1),
        new MenuEntry( "" << Color::Yellow << "Super T&T", nook2),
        new MenuEntry( "" << Color::Yellow << "T.I.Y", nook3),
        new MenuEntry( "" << Color::Yellow << "T&T Empurium", nook4),
    });
    *chara += new MenuFolder( "" << Color::Yellow << "バッジハック", "",
	 {
	    new MenuEntry( "" << Color::Yellow << "金", Allgold), 
		new MenuEntry( "" << Color::Yellow << "銀", Allsilver), 
		new MenuEntry( "" << Color::Yellow << "銅", Allbronze), 
		new MenuEntry( "" << Color::Yellow << "無し", Allnone), 
		new MenuEntry( "" << Color::Yellow << "夢見", yumemi), 
		new MenuEntry( "" << Color::Yellow << "お金混合", okane), 	 
		new MenuEntry( "" << Color::Yellow << "電車混合", densya), 	 
	 
	});
	
    *chara += new MenuFolder( "" << Color::Yellow << "スペシャルコード", "",
    {
	    new MenuEntry( "" << Color::Yellow << "ゲームスピードアップ", fastgamespeed), 
		new MenuEntry( "" << Color::Yellow << "アイテム無限", item),
		new MenuEntry( "" << Color::Yellow << "アイテム無限解除", itemoff),
		new MenuEntry( "" << Color::Yellow << "花アイテム無限", flower),
		new MenuEntry( "" << Color::Yellow << "花アイテム無限解除", flower),
		new MenuEntry( "" << Color::Yellow << "クイックモード", QuickMode),
    });
	
	*chara += new MenuFolder( "" << Color::DodgerBlue << "インベントリーコード", "",
    {
		new MenuEntry( "" << Color::DodgerBlue << "アイテム召喚", text2item, "Y + DD."),
		new MenuEntry( "" << Color::DodgerBlue << "みせびらかし", CanShowAnything), 
		new MenuEntry( "" << Color::DodgerBlue << "食べる", CanEatAnything), 
		new MenuEntry( "" << Color::DodgerBlue << "てがみ", CanLetterAnything), 
		new MenuEntry( "" << Color::DodgerBlue << "飾る", CanKabekakeAnything), 
		new MenuEntry( "" << Color::DodgerBlue << "没アイテム表示", NoDisappearUnusedItem), 
    });
	
	*chara += new MenuFolder( "" << Color::LimeGreen << "キーボードコード", "",
    {
		new MenuEntry( "" << Color::LimeGreen << "改行", Kaigyou), 
		new MenuEntry( "" << Color::LimeGreen << "コマンド",cmd, "コマンド一覧(発言不当)\nclean:持ち物全消去\ngset:金道具フルセット\ndupe:Slot1をSlot2にコピー\ndAll:Slot1を全Slotコピー\ns1&2&3:ストーカーチート\nmugen1(2) 無限フルーツ召喚"),
		new MenuEntry( "" << Color::LimeGreen << "a→＠", chatchange), 
    });
	
	
	
    *chara += new MenuFolder( "" << Color::Red << "テレポート", "",
    {
        EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー１", stalk1, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::B+DU, "プレイヤー１") }), 
        EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー２", stalk2, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::B+DR, "プレイヤー2") }), 
        EntryWithHotkey(new MenuEntry( "" << Color::Red << "プレイヤー３", stalk3, "キーボードから設定したいキーを選んでください。"),{ Hotkey(Key::B+DL, "プレイヤー3") }), 
    });

	*chara += new MenuFolder( ""<< Color::Silver << "その他", "",
	 {
		new MenuEntry( "" << Color::Silver << "瞬間穴脱出", instantaneousescape, "R."),
		new MenuEntry( "" << Color::Silver << "首へし折れる", Kubihesiore),
		new MenuEntry( "" << Color::Silver << "位置固定", toumei, "A + B."),
		new MenuEntry( "" << Color::Silver << "カタログ開放", PWP_all, "P1だけ"),
		new MenuEntry( "" << Color::Silver << "ツール高速入れ替え", ribasu, "B."),
		new MenuEntry( "" << Color::Silver << "村黒くなる", aaaaaaa, ""),
		new MenuEntry( "" << Color::Silver << "Tポーズ", Tpose, "ON: B + DPadUp.\nOFF: B + DPadDown.."),
		EntryWithHotkey(new MenuEntry( "" << Color::Silver << "立ち寝",  sleeping, "自分でKeyを設定してください。"),{ Hotkey(Key::X, "立ち寝") }),  
		EntryWithHotkey(new MenuEntry( "" << Color::Silver << "座って寝る", sittingsleeping, "自分でKeyを設定してください。"),{ Hotkey(Key::X, "座って寝る") }), 
		
	});
	
	menu += chara;
		
		
	}
	
	static void    ToggleTouchscreenForceOn(void)
    {
        static u32 original = 0;
        static u32 *patchAddress = nullptr;

        if (patchAddress && original)
        {
            *patchAddress = original;
            return;
        }

        static const std::vector<u32> pattern =
        {
            0xE59F10C0, 0xE5840004, 0xE5841000, 0xE5DD0000,
            0xE5C40008, 0xE28DD03C, 0xE8BD80F0, 0xE5D51001,
            0xE1D400D4, 0xE3510003, 0x159F0034, 0x1A000003
        };

        Result  res;
        Handle  processHandle;
        s64     textTotalSize = 0;
        s64     startAddress = 0;
        u32 *   found;

        if (R_FAILED(svcOpenProcess(&processHandle, 16)))
            return;

        svcGetProcessInfo(&textTotalSize, processHandle, 0x10002);
        svcGetProcessInfo(&startAddress, processHandle, 0x10005);
        if(R_FAILED(svcMapProcessMemoryEx(CUR_PROCESS_HANDLE, 0x14000000, processHandle, (u32)startAddress, textTotalSize)))
            goto exit;

        found = (u32 *)Utils::Search<u32>(0x14000000, (u32)textTotalSize, pattern);

        if (found != nullptr)
        {
            original = found[13];
            patchAddress = (u32 *)PA_FROM_VA((found + 13));
            found[13] = 0xE1A00000;
        }

        svcUnmapProcessMemoryEx(CUR_PROCESS_HANDLE, 0x14000000, textTotalSize);
exit:
        svcCloseHandle(processHandle);
    }

    // This function is called before main and before the game starts
    // Useful to do code edits safely
    void    PatchProcess(FwkSettings &settings)
    {
        ToggleTouchscreenForceOn();
    }

    // This function is called when the process exits
    // Useful to save settings, undo patchs or clean up things
    void    OnProcessExit(void)
    {
        ToggleTouchscreenForceOn();
    }

    void    InitMenu2(PluginMenu &menu)
    {
        // Create your entries here, or elsewhere
        // You can create your entries whenever/wherever you feel like it
    }

    int    main(void)
    {
	    std::string     namenote = "" << Color::Silver << "ACNL 3GX CTRPF";
        PluginMenu *menu = new PluginMenu(namenote, 1, 0, 0, "とびだせどうぶつの森 CTRPF　PLUGIN [1.0.0] \n\nPLG作成者Chara村長\nコード作成者水凪凌（Halcyon）\nこのplgは信用できる人にしか渡しません。\n二次配布は断固禁止です。\n有効に活用してください。\nTwitter Chara村長 @906180\n           Halcyon @505748");
        menu->SynchronizeWithFrame(true);
		static bool file = false;
		if(!file)
		{
		    if(!File::Exists("fdfdeferwerwf.bin"))
			{
			    Keyboard    k("パスワードを入力してください");
				std::string str;
				k.Open(str);
				if(str !="1354768chara")
				{
				    (MessageBox("パスワードが違います")());
					bool select = (MessageBox("この3gxを終了します", DialogType::DialogYesNo)());;
					if(!select)
					{
					    (MessageBox("帰れ")());
						
					}
				    abort();
				}
				else
				{
				    (MessageBox("認証完了!3gxが使用できます\n設定を反映させるために再起動してください")());
					File::Create("fdfdeferwerwf.bin");
					abort();
				}
			}
			file = true;
		}
		OSD::Notify(Color::Yellow << "Chara's" << Color::DodgerBlue << " Plugin Ready!");
        InitMenu(*menu);
		menu->Run();
		delete menu;
		return (0);
    }
}
