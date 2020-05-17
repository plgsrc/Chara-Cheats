#ifndef CHEATS_H
#define CHEATS_H

#include "CTRPluginFramework.hpp"
#include "Helpers/OSDManager.hpp"
#include <stdio.h>

#define	DU	DPadUp
#define DD	DPadDown
#define	DL	DPadLeft
#define	DR	DPadRight

namespace CTRPluginFramework
{
    
	//////////Chara cheat/////////////////
	
	void    add64(u64 addr, u64 vvv);
	void    sub64(u64 addr, u64 vvv);
	
	void	longitudinal(MenuEntry *entry);
	void	jellyfishstruggle(MenuEntry *entry);
	void	famousmushroom(MenuEntry *entry);
	void	airbed(MenuEntry *entry);
	void	airchair(MenuEntry *entry);
	void	kokeru(MenuEntry *entry);
	
	void	coord(MenuEntry *entry);
	void    Ccoord(MenuEntry *entry);
	void	Wallkantu(MenuEntry *entry);
	void    speed(MenuEntry *entry);
	void    antiGravity(MenuEntry *entry);
	void    Online(MenuEntry *entry);
	void	Black(MenuEntry *entry);
	
	void	fastgamespeed(MenuEntry *entry);
	void	item(MenuEntry *entry);
	void	itemoff(MenuEntry *entry);
	void	flower(MenuEntry *entry);
	void	floweroff(MenuEntry *entry);
	void    QuickMode(MenuEntry *entry);
	
	void	text2item(MenuEntry *entry);
	void	CanShowAnything(MenuEntry *entry);
	void	CanEatAnything(MenuEntry *entry);
	void	CanLetterAnything(MenuEntry *entry);
	void	CanKabekakeAnything(MenuEntry *entry);
	void	NoDisappearUnusedItem(MenuEntry *entry);
	
	void	Kaigyou(MenuEntry *entry);
	void    cmd(MenuEntry *entry);
	void    chatchange(MenuEntry *entry);
	void	moji(MenuEntry *entry);
	
	void	immediatepitfall(MenuEntry *entry);
	void	swiming(MenuEntry *entry);
	void	tourscore(MenuEntry *entry);
	
	void	Playername(MenuEntry *entry);
	void	Villagename(MenuEntry *entry);
	void    FDB(MenuEntry *entry);
	void    toreru(MenuEntry *entry);
	void    aaaaaInventoryModifier(MenuEntry *entry);
	void    seibnetu(MenuEntry *entry);
	void    aaaInventoryModifier(MenuEntry *entry);
	void    kokuseki(MenuEntry *entry);
	void	playersizechanger(MenuEntry *entry);
	void    p(MenuEntry *entry);
	void	headsize(MenuEntry *entry);
	void    aruku(MenuEntry *entry);
	void    maideza(MenuEntry *entry);

	
	void	frower(MenuEntry *entry);
	void	instantaneousescape(MenuEntry *entry);
	void	sittingsleeping(MenuEntry *entry);
	void	Kubihesiore(MenuEntry *entry);
	void	toumei(MenuEntry *entry);
	void	sleeping(MenuEntry *entry);
	void	ribasu(MenuEntry *entry);
	void	Tpose(MenuEntry *entry);
	void    show(MenuEntry *entry);
	void	sopaka(MenuEntry *entry);
	
	void    dream1(MenuEntry *entry);
	void    dream2(MenuEntry *entry);
	void    dream3(MenuEntry *entry);
	void    nen(MenuEntry *entry);
	void    tuki(MenuEntry *entry);
	void    hi(MenuEntry *entry);
	void    tantuki(MenuEntry *entry);
	void    tanday(MenuEntry *entry);
	
	void    aaaaa(MenuEntry *entry);
	void    aaaab(MenuEntry *entry);
	void    aaaac(MenuEntry *entry);
	void    aaaae(MenuEntry *entry);
	
	void    head(MenuEntry *entry);
	void    Accessories(MenuEntry *entry);
	void    Shirt(MenuEntry *entry);
	void    Pants(MenuEntry *entry);
	void    sox(MenuEntry *entry);
	void    shoes(MenuEntry *entry);
	
	void	Reset(MenuEntry *entry);
	void	depart(MenuEntry *entry);
	void	dooropen(MenuEntry *entry);
	void	shotopen(MenuEntry *entry);
	
	void    camera(MenuEntry *entry);
	void    show(MenuEntry *entry);
	void    AccessoriesSize(MenuEntry *entry);
	void    BuildingSize(MenuEntry *entry);
	void    Big(MenuEntry *entry);
	void    Hatsize(MenuEntry *entry);
	void  head2(MenuEntry *entry);
	void  shown(MenuEntry *entry);

	
	void    aaaaa(MenuEntry *entry);
	void    aaaab(MenuEntry *entry);
	void    aaaac(MenuEntry *entry);
	void    aaaae(MenuEntry *entry);
	
	void	Allgold(MenuEntry *entry);
	void	Allsilver(MenuEntry *entry);
	void	Allnone(MenuEntry *entry);
	void	Allbronze(MenuEntry *entry);
	void	yumemi(MenuEntry *entry);
	void	okane(MenuEntry *entry);
	void	densya(MenuEntry *entry);
	
	void Kannnacheats(MenuEntry *entry);
	void Kannnacheats2(MenuEntry *entry);
	void Kannnacheats3(MenuEntry *entry);
	void robot(MenuEntry *entry);
	void robot1(MenuEntry *entry);
	void robot2(MenuEntry *entry);
	void onrobot(MenuEntry *entry);
	void onrobot2(MenuEntry *entry);
	
	void    wether(MenuEntry *entry);
	void    stalk1(MenuEntry *entry);
	void    stalk2(MenuEntry *entry);
	void    stalk3(MenuEntry *entry);
	void    aaaaaa(MenuEntry *entry);
	void  uddo(MenuEntry *entry);
	
	void    aaaaaaaaInventoryModifier(MenuEntry *entry);
	void    aaabc(MenuEntry *entry);
	void    aaaaaaa(MenuEntry *entry);
	void    aaaaaaaInventoryModifier(MenuEntry *entry);
	int     chk_chat_online();
	
	void    door3(MenuEntry *entry);
	void    post(MenuEntry *entry);
	void    fence(MenuEntry *entry);
	void    sikiisi(MenuEntry *entry);
    void    assigin_region(u32 region);
	void    timetravel(MenuEntry *entry);
	void    underitem(MenuEntry *entry);
	void    deleteall(MenuEntry *entry);
	void    timetravel(MenuEntry *entry);
	void    real(MenuEntry *entry);
	
	void    PWP_all(MenuEntry *entry);
	void    nook_common(int value);
	void    nook1(MenuEntry *entry);
	void    nook2(MenuEntry *entry);
	void    nook3(MenuEntry *entry);
	void    nook4(MenuEntry *entry);
	void    tch_warp(MenuEntry *entry);

   /*
     * Globals functions
     */

    void	TriggerSwords(int x);
    void	TriggerShields(int x);
    void	TriggerSuits(int x);
    
    void	OpenAnyChestInTheGameAsManyTimes(MenuEntry *entry);
    void	CollectHeartPiecesInOverworldAsMany(MenuEntry *entry);
    void	AlwaysHaveNayrusLoveActivated(MenuEntry *entry);
	
}

#endif
