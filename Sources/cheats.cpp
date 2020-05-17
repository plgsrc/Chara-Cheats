#include "types.h"
#include "cheats.hpp"
#include <string>
#include <algorithm>

namespace CTRPluginFramework
{
   
	void    add(u32 addr, u32 vvv)
	{
		u32 aaa;
		Process::Read32(addr, aaa);
		Process::Write32(addr, aaa+vvv);
	}
	
	void    sub(u32 addr, u32 vvv)
	{
		u32 aaa;
		Process::Read32(addr, aaa);
		Process::Write32(addr, aaa-vvv);
	}
	
	///////////////////Chara Pulgin codes////////////////////////
	using StringVector = std::vector<std::string>;

	static u32	g_basePointer = 0x005A2E3C;



	
	void    longitudinal(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4, 0x065F6000);
        }
        else
        {
        Process::Write32(0x3309A110, 0x065F6000);
        }
    }}
	void    jellyfishstruggle(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4,0x1F262700);
        }
        else
        {
        Process::Write32(0x3309A110,0x1F262700);
        }
    }}
	void    famousmushroom(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4, 0x324CD680);
        }
        else
        {
        Process::Write32(0x3309A110, 0x324CD680);
        }
    }}
	void    kokeru(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4,0xC6ADB3C3);
        }
        else
        {
        Process::Write32(0x3309A110,0xC6ADB3C3);
        }
    }}
	void    airbed(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4,0x82818200);
        }
        else
        {
        Process::Write32(0x3309A110, 0x82818200);
        }
    }}
	void    airchair(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4,0xAAAEAA00);
        }
        else
        {
        Process::Write32(0x3309A110, 0xAAAEAA00);
        }
    }}
    
    ///////////////////////////////  Movement Codes  /////////////////////////////////
	void    coord(MenuEntry *entry)
        {
      u32 loc;
      float outz;
      float outx;
      float inz;
      float inx;
        if(Process:: ReadFloat(0x33099E58, outz))
        if(Process:: ReadFloat(0x33099E50, outx))
          if(Process:: ReadFloat(0x33099F84, inz))
        if(Process:: ReadFloat(0x33099F7C, inx))

      
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        if (Controller::IsKeysDown(A + DPadUp))
        {
          outz = outz - 9.0;
            if(Process:: WriteFloat(0x33099E58, outz));
        }
        if (Controller::IsKeysDown(A + DPadDown))
        {
          outz = outz + 9.0;
            if(Process:: WriteFloat(0x33099E58, outz));
        }
        if (Controller::IsKeysDown(A + DPadLeft))
        {
          outx = outx - 9.0;
            if(Process:: WriteFloat(0x33099E50, outx));
        }
        if (Controller::IsKeysDown(A + DPadRight))
        {
          outx = outx + 9.0;
            if(Process:: WriteFloat(0x33099E50, outx));
        }
        }
        else 
        {
        if (Controller::IsKeysDown(A + DPadUp))
        {
          inz = inz - 9.0;
            if(Process:: WriteFloat(0x33099F84, inz));
        }
        if (Controller::IsKeysDown(A + DPadDown))
        {
          inz = inz + 9.0;
          if(Process:: WriteFloat(0x33099F84, inz));
        }
        if (Controller::IsKeysDown(A + DPadLeft))
        {
          inx = inx - 9.0;
            if(Process:: WriteFloat(0x33099F7C, inx));
        }
        if (Controller::IsKeysDown(A + DPadRight))
        {
          inx = inx + 9.0;
            if(Process:: WriteFloat(0x33099F7C, inx));
        }
        }    
        
}
    void    Ccoord(MenuEntry *entry)
        {
      u32 loc;
      float outz;
      float outx;
      float inz;
      float inx;
        if(Process:: ReadFloat(0x33099E58, outz))
        if(Process:: ReadFloat(0x33099E50, outx))
          if(Process:: ReadFloat(0x33099F84, inz))
        if(Process:: ReadFloat(0x33099F7C, inx))

      
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        if (Controller::IsKeysDown(A + CPadUp))
        {
          outz = outz - 9.0;
            if(Process:: WriteFloat(0x33099E58, outz));
        }
        if (Controller::IsKeysDown(A + CPadDown))
        {
          outz = outz + 9.0;
            if(Process:: WriteFloat(0x33099E58, outz));
        }
        if (Controller::IsKeysDown(A + CPadLeft))
        {
          outx = outx - 9.0;
            if(Process:: WriteFloat(0x33099E50, outx));
        }
        if (Controller::IsKeysDown(A + CPadRight))
        {
          outx = outx + 9.0;
            if(Process:: WriteFloat(0x33099E50, outx));
        }
        }
        else 
        {
        if (Controller::IsKeysDown(A + CPadUp))
        {
          inz = inz - 9.0;
            if(Process:: WriteFloat(0x33099F84, inz));
        }
        if (Controller::IsKeysDown(A + CPadDown))
        {
          inz = inz + 9.0;
          if(Process:: WriteFloat(0x33099F84, inz));
        }
        if (Controller::IsKeysDown(A + CPadLeft))
        {
          inx = inx - 9.0;
            if(Process:: WriteFloat(0x33099F7C, inx));
        }
        if (Controller::IsKeysDown(A + CPadRight))
        {
          inx = inx + 9.0;
            if(Process:: WriteFloat(0x33099F7C, inx));
        }
        }    
        
}

    void    Wallkantu(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(L + DPadUp) && pressed==false)
    {    
        pressed=true;
        Process::Write32(0x0064EEF4, 0xEA000094);
        Process::Write32(0x0064EF0C, 0xEA000052);
        Process::Write32(0x0064F070, 0xEA000001);
        Process::Write32(0x0064F0E8, 0xEA000014);
        Process::Write32(0x0064F19C, 0xE1A00000);
        Process::Write32(0x0064F1B4, 0xE1A00000);
        Process::Write32(0x0064F1B8, 0xEA000026);
        Process::Write32(0x0064F1E4, 0xEA000065);
		OSD::Notify("Cheat ON");
    }

    if (Controller::IsKeysDown(L + DPadDown) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x0064EEF4, 0x0A000094);
        Process::Write32(0x0064EF0C, 0x0A000052);
        Process::Write32(0x0064F070, 0x0A000001);
        Process::Write32(0x0064F0E8, 0xDA000014);
        Process::Write32(0x0064F19C, 0xED841A05);
        Process::Write32(0x0064F1B4, 0xED840A07);
        Process::Write32(0x0064F1B8, 0x0A000026);
        Process::Write32(0x0064F1E4, 0x0A000065);
		OSD::Notify("Cheat OFF");
    }

    if (!Controller::IsKeysDown(L + DPadDown) && !Controller::IsKeysDown(L + DPadUp))
    {
        pressed=false;
    }
}
    void    speed(MenuEntry *entry)
{
    u32  velocity;
    float Flo;
    if (Controller::IsKeyDown(B))
    {
        Process::Read32(0x33099E7C, velocity);
        Process::ReadFloat(0x33099E7C, Flo);
        if (velocity >= 0x41A79DB3)
        {
            Process::Write32(0x33099E7C, 0x41A79DB3);
        }
        else if (velocity > 0)
        {
            Flo += 2.0;
            Process::WriteFloat(0x33099E7C, Flo);
        }
    }
}
void  antiGravity(MenuEntry *entry)
{
    if (Controller::IsKeysDown(L + DPadUp))
    {
        Process::Write16(0x33099FB7, 0xFFFF);
    }  
  if (Controller::IsKeysDown(L + DPadDown))
    {
        Process::Write16(0x33099FB7, 0x0000);
    } 
}
void    Online(MenuEntry *entry)
    {
    u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        if (Controller::IsKeysDown(DPadUp + L))
        {    
        Process::Write32(0x3309A702, 0x007FFFFF);
            }
        if (Controller::IsKeysDown(DPadDown + L))
            {    
        Process::Write32(0x3309A702, 0x00010FF0);
        }
        }
        else
        {
        if (Controller::IsKeysDown(DPadUp+ L))
        {    
        Process::Write32(0x3309A82E, 0x007FFFFF);
            }
        if (Controller::IsKeysDown(DPadDown + L))
            {    
        Process::Write32(0x3309A82E, 0x00010FF0);
        }
        }
}
    void	Black(MenuEntry *entry)
    {
	    if (entry->Hotkeys[0].IsDown())
        {
	        Process::Write32(0x3309A70C,0x000010FF);
        }
    }	
    ///////////////////////////////  Special Codes  /////////////////////////////////
	void	fastgamespeed(MenuEntry *entry)
    {
        Process::Write32(0x32939920, 0x00000000);
    }	
    void	item(MenuEntry *entry)
    {
	    Process::Write32(0x0019C4D0, 0x00000000);
    }	
    void	itemoff(MenuEntry *entry)
    {
	    Process::Write32(0x0019C4D0, 0xEB057D0A);
    }
    void	flower(MenuEntry *entry)
    {
	    Process::Write32(0x0019C42C, 0x00000000);
    }
    void	floweroff(MenuEntry *entry)
    {
	    Process::Write32(0x0019C42C, 0xEB057D33);
    }
	void    QuickMode(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(R + DPadUp) && pressed==false)
    {    
        pressed=true;
        Process::Write32(0x0065FA2A, 0x00004050);
        Process::Write32(0x0065F626, 0x00005000);
        Process::Write32(0x00668E8E, 0x00004050);
        Process::Write32(0x0066930A, 0x00004050);
        Process::Write32(0x0066ED66, 0x00004050);
        Process::Write32(0x00676C52, 0x00004050);
        Process::Write32(0x0065F7C2, 0x00004050);
        Process::Write32(0x0067A2C2, 0x00004050);
        Process::Write32(0x0067AD1E, 0x00004050);
        Process::Write32(0x00668D46, 0x00004050);
        Process::Write32(0x00687DC6, 0x00004050);
        OSD::Notify("Quick Mode:" << Color::Yellow << "ON");
    }

    if (Controller::IsKeysDown(R + DPadDown) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x0065FA2A, 0x00003F80);
        Process::Write32(0x0065F626, 0x00003F80);
        Process::Write32(0x00668E8E, 0x00003F80);
        Process::Write32(0x0066930A, 0x00003F80);
        Process::Write32(0x0066ED66, 0x00003F80);
        Process::Write32(0x00676C52, 0x00003F80);
        Process::Write32(0x0065F7C2, 0x00003F80);
        Process::Write32(0x0067A2C2, 0x00003F80);
        Process::Write32(0x0067AD1E, 0x00003F80);
        Process::Write32(0x00668D46, 0x00003F80);
        Process::Write32(0x00687DC6, 0x00003F80);
        OSD::Notify("Quick Mode:" << Color::Red << "OFF");
    }

    if (!Controller::IsKeysDown(R + DPadDown) && !Controller::IsKeysDown(R + DPadUp))
    {
        pressed=false;
    }
}
	///////////////////////////////  Inventory Codes  /////////////////////////////////
	#ifndef READU32
	
#  define READU32(addr)            *(vu32*)(addr)

#endif
u32 g_player_ptr = 0xAA914C;
void    writeSlot(int slot, u32 item)
{
    u32    offset;
    
    Process::Read32(g_player_ptr, offset);
    if (offset != 0 && item > 0x00000000 && (item < 0xFFFF7FFE || item == 0x7FFE))
    {
        Process::Write32(offset + 0x6BD0 + (slot * 4), item);
    }  
}
u32    readSlot(int slot)
{
    u32    offset;

    offset = READU32(g_player_ptr);
    if (offset != 0)
        return (READU32(offset + 0x6BD0 + (slot * 4)));
}
void    text2item(MenuEntry *entry) 
{
    u32 a;
    if (Controller::IsKeysDown(Y + DPadDown))
    {
        Keyboard        keyboard("\u30A2\u30A4\u30C6\u30E0\u0049\u0044\u3092\u5165\u529B\u000A\u30B9\u30ED\u30C3\u30C8\u306B\u7A7A\u304D\u304C\u306A\u3044\u3068\u5931\u6557\u3057\u307E\u3059");

        if (keyboard.Open (a) != -1)
        {
            if(readSlot(0) == 0x7FFE)
            {
                writeSlot(0, a);
            }    
                else if(readSlot(1) == 0x7FFE)
                {
                    writeSlot(1, a);
                }
                else if(readSlot(2) == 0x7FFE)
                {
                    writeSlot(2, a);
                }
                else if(readSlot(3) == 0x7FFE)
                {
                    writeSlot(3, a);
                }
                else if(readSlot(4) == 0x7FFE)
                {
                    writeSlot(4, a);
                }
                else if(readSlot(5) == 0x7FFE)
                {
                    writeSlot(5, a);
                }    
                else if(readSlot(6) == 0x7FFE)
                {
                    writeSlot(6, a);
                }
                else if(readSlot(7) == 0x7FFE)
                {
                    writeSlot(7, a);
                }    
                else if(readSlot(8) == 0x7FFE)
                {
                    writeSlot(8, a);
                }
                else if(readSlot(9) == 0x7FFE)
                {
                    writeSlot(9, a);
                }
                else if(readSlot(10) == 0x7FFE)
                {
                    writeSlot(10, a);
                }
                else if(readSlot(11) == 0x7FFE)
                {
                    writeSlot(11, a);
                }
                else if(readSlot(12) == 0x7FFE)
                {
                    writeSlot(12, a);
                }
                else if(readSlot(13) == 0x7FFE)
                {
                    writeSlot(13, a);
                }
                else if(readSlot(14) == 0x7FFE)
                {
                    writeSlot(14, a);
                }
                else if(readSlot(15) == 0x7FFE)
                {
                    writeSlot(15, a);
                }
        }    
    }
}
    void	CanShowAnything(MenuEntry *entry)
    {
	    Process::Write32(0x0019B9D8,0xE1A00000);
    }		
    void	CanEatAnything(MenuEntry *entry)
    {
	    Process::Write32(0x0019C150,0xE1A00000);
    }		
    void	CanLetterAnything(MenuEntry *entry)
{
    {
	    Process::Write32(0x0019BA38,0xE1A00000);
    }	
}
    void	CanKabekakeAnything(MenuEntry *entry)
    {
	    Process::Write32(0x0019BFB0,0xE1A00000);
	    Process::Write32(0x0019BFC8,0xE1A00000);
    }	
    void	NoDisappearUnusedItem(MenuEntry *entry)
    {
	    Process::Write32(0x007238C0,0xE1A00000);
    }	
	///////////////////////////////  Keyboard Code  ////////////////////////////////
	void	Kaigyou(MenuEntry *entry)
    {
	    Process::Write32(0x00AD0250,0x01000000);
		Process::Write32(0x32E15740,0x45800000);
		
    }	
	
	///////////////////////////////  Pit Motion Codes  //////////////////////////////
	void	immediatepitfall(MenuEntry *entry)
{
	if (Controller::IsKeysDown(Key::DPadDown + B))
    {
	    Process::Write32(0x33099FE4, 0x60E51673);
    }
}	
    void	swiming(MenuEntry *entry)
{
	if (Controller::IsKeysDown(Key::B + Y))
    {
	    Process::Write32(0x33099FE4, 0x06132304);
    }
}	
    void	tourscore(MenuEntry *entry)
    {
	    if (Controller::IsKeysDown(Key::DPadUp + B))
        {
	        Process::Write32(0x3305B974, 0x3B9AC9FF);
        }
    }	
    ///////////////////////////////  Setting Codes  ////////////////////////////////
	void        add2(u32 address, float value)
{
    float valueread;
    Process::ReadFloat(address, valueread);
    Process::WriteFloat(address, valueread + value);
}
void        sub2(u32 address, float value)
{
    float valueread;
    Process::ReadFloat(address, valueread);
    Process::WriteFloat(address, valueread - value);
}
	void	playersizechanger(MenuEntry *entry)
{
    if (Controller::IsKeysDown(R + DPadUp))
	{
		add2(0x001ACD5C, 0.005);
	}
	if (Controller::IsKeysDown(R + DPadDown))
	{
		sub2(0x001ACD5C, 0.005);
	}
	if (Controller::IsKeysDown(R + DPadLeft))
	{
		Process::Write32(0x001ACD5C, 0x3F800000);
	}
}
void  headsize(MenuEntry *entry)
{
    Keyboard        keyboard("Headsize 0000XXXX X=size\nDefault=3F80");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x002725AE, a);
    }
    entry->Disable();
}
   void    Playername(MenuEntry *entry)
{
    if (Controller::IsKeysDown(Key::DPadDown + Y))
    {
    u32  pn;
    u32  pn1;
    u32  pn2;
    u32  pn3;
    
    Process::Read32(0x32E14348, pn);
          Process::Read32(0x32E1434C, pn1);
          Process::Read32(0x32E14350, pn2);
          Process::Read32(0x32E14354, pn3);
    
        {
            Process::Write32(0x31F4F048, pn);
            Process:: Write32(0x31F4F04C, pn1);
            Process::Write32(0x31F4F050, pn2);
            Process::Write32(0x31F4F054, pn3);
        }

}}
void    Villagename(MenuEntry *entry)
{
    if (Controller::IsKeysDown(Key::DPadDown + Y))
    {
    u32  vn;
    u32  vn1;
    u32  vn2;
    u32  vn3;
    
    Process::Read32(0x32E14348, vn);
            Process::Read32(0x32E1434C, vn1);
            Process::Read32(0x32E14350, vn2);
            Process::Read32(0x32E14354, vn3);
    
        {
            Process::Write32(0x31F4F05E, vn);
            Process::Write32(0x31F4F062, vn1);
            Process::Write32(0x31F4F066, vn2);
            Process::Write32(0x31F4F06A, vn3);
        }


}}

void    toreru(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(Y + DPadUp) && pressed==false)
    {
        pressed=true;
        if(Process:: Write32(0x005989FC, 3925868592));
		OSD::Notify("Pick Up  ON");
    }
    
    if (Controller::IsKeysDown(Y + DPadDown) && pressed==false)
    {
        pressed=true;
        if(Process:: Write32(0x005989FC, 167772228));
		OSD::Notify("Pick Up OFF");
    }

    if (!Controller::IsKeysDown(Y + DPadDown) && !Controller::IsKeysDown(Y + DPadUp))
    {
        pressed=false;
    }        
}
void    FDB(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(R + DPadUp) && pressed==false)
    {    
        pressed=true;
        Process::Write32(0x00596890, 0xE3A0001D);
		    OSD::Notify("Flowers Don's Break ON");
    }

    if (Controller::IsKeysDown(R + DPadDown) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x00596890, 0xEBF5990F);
		    OSD::Notify("Flowers Don's Break OFF");
    }
        if (!Controller::IsKeysDown(R + DPadUp) && !Controller::IsKeysDown(R + DPadDown))
    {
        pressed=false;
    }
}
void    aruku(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(R + DPadUp) && pressed==false)
    {    
        pressed=true;
        Process::Write32(0x00596890, 0xEA00001D);
		    OSD::Notify("ON");
    }

    if (Controller::IsKeysDown(R + DPadDown) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x00596890, 0x00000000);
		    OSD::Notify("OFF");
    }
        if (!Controller::IsKeysDown(R + DPadUp) && !Controller::IsKeysDown(R + DPadDown))
    {
        pressed=false;
    }
}
void    maideza(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(A) && pressed==false)
    {    
        pressed=true;
        Process::Write32(0x002FEC78, 0xE3A00001);
		    OSD::Notify("ON");
    }

    if (Controller::IsKeysDown(B) && pressed==false)
    {
        pressed=true;
        Process::Write32(0x002FEC78, 0xE3A00000);
		    OSD::Notify("OFF");
    }
        if (!Controller::IsKeysDown(A) && !Controller::IsKeysDown(B))
    {
        pressed=false;
    }
}
	void  camera(MenuEntry *entry)
{
    Keyboard        keyboard("Change of view 0000XXXX\nX=View Default=3F80\nCan not be lager than 3F80.");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x0047D16E, a);
    }
    entry->Disable();
}
void	sopaka(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F655,0x3ADE68B1);
    }
	///////////////////////////////  Misc.   /////////////////////////////////
	void	frower(MenuEntry *entry)
    {
	    if (Controller::IsKeysDown(Key::B + Y))
        {
	        Process::Write32(0x3309A2C4, 0x00000059);
        }
    }	
    void	instantaneousescape(MenuEntry *entry)
    {
	    if (Controller::IsKeysDown(Key::R))
        {
	        Process::Write32(0x33099FC0, 0x00000000);
        }
    }	
   
void    sittingsleeping(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4, 0xC98FAA3F);
        }
        else
        {
        Process::Write32(0x3309A110, 0xC98FAA3F);
        }
    }}
    void	Kubihesiore(MenuEntry *entry)
    {
	    Process::Write32(0x3309A04C,0x37B274F4);
    }
    void	toumei(MenuEntry *entry)
{
	if (Controller::IsKeysDown(Key::A + B))
    {
	    Process::Write32(0x33099FE4, 0x00000000);
    }
}	
  
void    sleeping(MenuEntry *entry)
    {
    if (entry->Hotkeys[0].IsDown())
        {
      u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        Process::Write32(0x33099FE4, 0xCA0D06C9);
        }
        else
        {
        Process::Write32(0x3309A110, 0xCA0D06C9);
        }
    }}
    void	ribasu(MenuEntry *entry)
{
	if (Controller::IsKeyDown(Key::B))
    {
	    Process::Write32(0x33099FB0,0x130000FF);
    }
}	
void    Tpose(MenuEntry *entry)
{
    static bool pressed = false;
    if (Controller::IsKeysDown(B + DPadUp) && pressed==false)
    {    
        pressed=true;
        Process::Write32(0x0073AA30, 0xE1A00000);
        OSD::Notify("T-Pose: " << Color::Yellow << "ON");
    }

    if (Controller::IsKeysDown(B + DPadDown) && pressed==false)
    {    
        pressed=true;
        Process::Write32(0x0073AA30, 0x0A000011);
        OSD::Notify("T-Pose: " << Color::Red << "OFF");
    }

    if (!Controller::IsKeysDown(B + DPadDown) && !Controller::IsKeysDown(B + DPadUp))
    {
        pressed=false;
    }
}
void    aaaaaa(MenuEntry *entry)
    {
        Process::Write32(0x0047CC18, 0x41000000);
    }
    //////////////////////////////////    menu coad    ////////////////////////////////
	struct aaaaaItem
    {
        const char  *aaaaaname;
        const u16    aaaaaid;
    };

    static const std::vector<aaaaaItem> g_aaaaaitems =
    {
        { "\u7121\u3057", 0xfe7f },
        { "\u65A7", 0x334d },
        { "\u7DB2", 0x3351 },
        { "\u7AFF", 0x3355 },
        { "\u30B9\u30B3\u30C3\u30D7", 0x3359 },    
        { "\u30B8\u30E7\u30A6\u30ED", 0x335d },
        { "\u30D1\u30C1\u30F3\u30B3", 0x3361 },
        { "\u30CF\u30F3\u30DE\u30FC", 0x3365 },
        { "\u7dda\u9999\u82b1\u706b", 0x3368 },
        { "party popper", 0x336a },
        { "pink bpinwheel", 0x338b },
        { "\u30B3\u30FC\u30D2\u30FC", 0x338c },
        { "\u30A2\u30A4\u30B9", 0x3394 },
        { "\u8C46", 0x338e },
        { "\u30B5\u30F3\u30BF\u306E\u888B", 0x33a1 },
    }; 
        void    aaaaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaaaitems;

        if (aaaaaitems.empty())
            for (const aaaaaItem &i : g_aaaaaitems)
                aaaaaitems.push_back(i.aaaaaname);

        Keyboard    keyboard("\u9053\u5177\u6A5F\u80FD\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002", aaaaaitems);
        int        aaaaachoice = keyboard.Open();

        if (aaaaachoice >= 0)
            Process::Write16(0x33096734, g_aaaaaitems[aaaaachoice].aaaaaid);
    }
	struct aaaaItem
    {
        const char  *aaaaname;
        const u32    aaaaid;
    };

    static const std::vector<aaaaItem> g_aaaaitems =
    {
        { "\u5973", 0x99999999 },
        { "\u7537", 0x00000000 },
        
    }; 
        void    seibnetu(MenuEntry *entry)
    {
        static StringVector aaaaitems;

        if (aaaaitems.empty())
            for (const aaaaItem &i : g_aaaaitems)
                aaaaitems.push_back(i.aaaaname);

        Keyboard    keyboard("\u6027\u5225\u3092\u5909\u66F4\u3057\u307E\u3059", aaaaitems);
        int        aaaachoice = keyboard.Open();

        if (aaaachoice >= 0)
            Process::Write32(0x31F4F058, g_aaaaitems[aaaachoice].aaaaid);
    }
	struct aaaItem
    {
        const char  *aaaname;
        const u8    aaaid;
    };
	static const std::vector<aaaItem> g_aaaitems =
    {
        { "\u6751", 0x00 },
		{ "\u5546\u5e97\u8857", 0x01 },
		{ "\u30d7\u30ec\u30a4\u30e4\u30fc\uff11\u306e\u5bb6", 0x03 },
        { "\u30d7\u30ec\u30a4\u30e4\u30fc\uff12\u306e\u5bb6", 0x09 },
		{ "\u30d7\u30ec\u30a4\u30e4\u30fc\uff13\u306e\u5bb6", 0x0F },
		{ "\u30d7\u30ec\u30a4\u30e4\u30fc\uff14\u306e\u5bb6", 0x15 },
		{ "R-Parkers", 0x2B },
        { "\u30AF\u30E9\u30B7\u30C3\u30AF\u306A\u4EA4\u756A", 0x31 },
        { "\u30AB\u30D5\u30A7", 0x32 },
        { "\u5922\u898B\u306E\u9928", 0x37 },
        { "\u30C7\u30D1\u30FC\u30C8\u0031\u968E", 0x3C },
        { "\u30A8\u30A4\u30D6\u30EB\u30B7\u30B9\u30BF\u30FC\u30BA \u670D\u5C4B", 0x3F },
        { "\u30A8\u30A4\u30D6\u30EB\u30B7\u30B9\u30BF\u30FC\u30BA \u30A2\u30AF\u30BB\u5C4B", 0x40 },
        { "\u4E0D\u52D5\u7523\u5C4B", 0x41 },
        { "Club444", 0x47 },
        { "\u30D3\u30E5\u30FC\u30C6\u30A3\u30FC\u30B5\u30ED\u30F3\u30B9\u30D4\u30FC\u30C7\u30A3", 0x48 },
	    { "\u535a\u7269\u9928", 0x49 },
        { "\u535A\u7269\u9928 \u0032\u968E", 0x55 },
        {"\u90F5\u4FBF\u5C40", 0x5A },
        {"\u5922\u898B\u306E\u9928", 0x5B },
        { "\u8A3C\u660E\u5199\u771F\u6A5F", 0x5C },
        { "\u30CF\u30C3\u30D4\u30FC\u30DB\u30FC\u30E0\u30A2\u30AB\u30C7\u30DF\u30FC \u4E2D\u592E", 0x8E },
        { "\u30AA\u30FC\u30C8\u30AD\u30E3\u30F3\u30D7\u5834", 0xA0 },
      
    };
	void    aaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaitems;

        if (aaaitems.empty())
            for (const aaaItem &i : g_aaaitems)
                aaaitems.push_back(i.aaaname);

        Keyboard    keyboard("\u81ea\u5206\u306e\u6751\u306b\u3042\u308b\u5834\u6240\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002\n\u6ce8\u610f\uff1a\u5ba4\u5185\u7cfb\u306e\u79fb\u52d5\u306f\u30d0\u30b0\u308a\u307e\u3059", aaaitems);
        int        aaachoice = keyboard.Open();

        if (aaachoice >= 0)
            Process::Write8(0x0095133A, g_aaaitems[aaachoice].aaaid);
			
			        u32 loc;
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
    {    
              Process::Write16(0x33099FB3, 51456);
        }
    }
        else
        {
    {    
              Process::Write32(0x3309a0dc, 940568888);
              Process::Write32(0x3309a0df, 940568888);
        }
        }
    } 
    struct aaaaaaItem
    {
        const char  *aaaaaaname;
        const u32    aaaaaaid;
    };       
   static const std::vector<aaaaaaItem> g_aaaaaaitems =
    {
        { "\u65e5\u672c", 0x00010000 },
        { "\u82f1\u9818\u30f4\u30a1\u30fc\u30b8\u30f3\u8af8\u5cf6", 0x00110000 },
		{ "\u30ab\u30ca\u30c0", 0x00120000 },
		{ "\u30b3\u30b9\u30bf\u30ea\u30ab", 0x00160000 },
		{ "\u30d5\u30e9\u30f3\u30b9\u9818\u30ae\u30a2\u30ca", 0x001B0000 },
		{ "\u30b8\u30e3\u30de\u30a4\u30ab", 0x00220000 },
		{ "\u30e1\u30ad\u30b7\u30b3", 0x00240000 },
		{ "\u30aa\u30e9\u30f3\u30c0\u9818\u30a2\u30f3\u30c6\u30a3\u30eb", 0x00260000 },
		{ "\u30a8\u30af\u30a2\u30c9\u30eb", 0x00190000 },
		{ "\u30da\u30ed\u30fc", 0x002A0000 },
		{ "\u30c8\u30ea\u30cb\u30c0\u30fc\u30c8\u30fb\u30c8\u30d0\u30b4", 0x002F0000 },
		{ "\u30bf\u30fc\u30af\u30b9\u30fb\u30ab\u30a4\u30b3\u30b9\u8af8\u5cf6", 0x00300000 },
		{ "\u30a2\u30e1\u30ea\u30ab\u5408\u8846\u56fd", 0x00310000 },
		{ "\u30d9\u30cd\u30ba\u30a8\u30e9", 0x00340000 },
		{ "\u30aa\u30fc\u30b9\u30c8\u30e9\u30ea\u30a2", 0x00410000 },
		{ "\u30dc\u30b9\u30cb\u30a2\u30fb\u30d8\u30eb\u30c4\u30a7\u30b4\u30d3\u30ca", 0x00440000 },
		{ "\u30d6\u30eb\u30ac\u30ea\u30a2", 0x00460000 },
		{ "\u30c7\u30f3\u30de\u30fc\u30af", 0x004A0000 },
		{ "\u30d5\u30e9\u30f3\u30b9", 0x004D0000 },
		{ "\u4e2d\u56fd", 0x00A00000 },
		{ "\u30bb\u30f3\u30c8\u30d3\u30f3\u30bb\u30f3\u30c8\u30fb\u30b0\u30ec\u30ca\u30c7\u30a3\u30fc\u30f3", 0x002D0000 },
        { "\u30a4\u30ae\u30ea\u30b9", 0x006E0000 },
    }; 
        void    kokuseki(MenuEntry *entry)
    {
        static StringVector aaaaaaitems;

        if (aaaaaaitems.empty())
            for (const aaaaaaItem &i : g_aaaaaaitems)
                aaaaaaitems.push_back(i.aaaaaaname);

        Keyboard    keyboard("\u5909\u66f4\u3057\u305f\u3044\u56fd\u540d\u3092\u9078\u3093\u3067\u304f\u3060\u3055\u3044", aaaaaaitems);
        int        aaaaaachoice = keyboard.Open();

        if (aaaaaachoice >= 0)
            Process::Write32(0x31F4F070, g_aaaaaaitems[aaaaaachoice].aaaaaaid);
    }
	struct aaItem
    {
        const char  *aaname;
        const u32    aaid;
    };       
	static const std::vector<aaItem> g_aaitems =
    {
        { "P1", 0x31F49AA0 },
        { "P2", 0x31F53F20 },
		{ "P3", 0x31F5E3A0 },
        { "P4", 0x31F68820 },
        
    }; 
        void    p(MenuEntry *entry)
    {
        static StringVector aaitems;

        if (aaitems.empty())
            for (const aaItem &i : g_aaitems)
                aaitems.push_back(i.aaname);

        Keyboard    keyboard("\u30d7\u30ec\u30a4\u30e4\u30fc\u3092\u9078\u629e\u3057\u3066\u304f\u3060\u3055\u3044", aaitems);
        int        aachoice = keyboard.Open();

        if (aachoice >= 0)
            Process::Write32(0x00AA914C, g_aaitems[aachoice].aaid);
    }
	struct aaaaaaaaaItem
    {
        const char  *aaaaaaaaaname;
        const u32    aaaaaaaaaid;
    };       
	static const std::vector<aaaaaaaaaItem> g_aaaaaaaaaitems =
    {
        { "\u5feb\u6674", 0xE3A00000 },
        { "\u6674\u308c", 0xE3A00001 },
		{ "\u66c7\u308a", 0xE3A00002 },
        { "\u96e8", 0xE3A00003 },
		{ "\u5927\u96e8", 0xE3A00004 },
		{ "\u96ea", 0xE3A00005 },
        { "\u5927\u96ea", 0xE3A00006 },
        
    }; 
        void    wether(MenuEntry *entry)
    {
        static StringVector aaaaaaaaaitems;

        if (aaaaaaaaaitems.empty())
            for (const aaaaaaaaaItem &i : g_aaaaaaaaaitems)
                aaaaaaaaaitems.push_back(i.aaaaaaaaaname);

        Keyboard    keyboard("\u5929\u6c17\u5909\u66f4", aaaaaaaaaitems);
        int        aaaaaaaaachoice = keyboard.Open();

        if (aaaaaaaaachoice >= 0)
            Process::Write32(0x0062E728, g_aaaaaaaaaitems[aaaaaaaaachoice].aaaaaaaaaid);
    }
	void  show(MenuEntry *entry)
{
    Keyboard        keyboard("Show XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x3309A704, a);
    }
    entry->Disable();
}
void  shown(MenuEntry *entry)
{
    Keyboard        keyboard("Show XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x3309A830, a);
    }
    entry->Disable();
}
void  uddo(MenuEntry *entry)
{
    Keyboard        keyboard("Hat Size XXXX0000\nX=Size Default=3F80");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x005901A4, a);
    }
    entry->Disable();

}
	//////////////////////////////////    Sopaka codes    ///////////////////////////////
	void  dream1(MenuEntry *entry)
{
    Keyboard        keyboard("Dream 1");
    u16 a;
    u8 b;
    u8 c;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write16(0x080E0000, a);
        Process::Read8(0x080E0000, b);
        Process::Read8(0x080E0001, c);
        Process::Write8(0x31F4F199, c);
        Process::Write8(0x31F4F194, b);
    }
    entry->Disable();
}
void  dream2(MenuEntry *entry)
{
    Keyboard        keyboard("Dream 2");
    u16 a;
    u8 b;
    u8 c;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write16(0x080E0002, a);
        Process::Read8(0x080E0002, b);
        Process::Read8(0x080E0003, c);
        Process::Write8(0x31F4F193, c);
        Process::Write8(0x31F4F192, b);
    }
    entry->Disable();
}

void  dream3(MenuEntry *entry)
{
    Keyboard        keyboard("Dream 3");
    u16 a;
    u8 b;
    u8 c;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write16(0x080E0004, a);
        Process::Read8(0x080E0004, b);
        Process::Read8(0x080E0005, c);
        Process::Write8(0x31F4F191, c);
        Process::Write8(0x31F4F190, b);
    }
    entry->Disable();
}

void  nen(MenuEntry *entry)
{
    Keyboard        keyboard("nen");
    u16 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write16(0x31F4F076, a);
    }
    entry->Disable();
}

void  tuki(MenuEntry *entry)
{
    Keyboard        keyboard("month");
    u8 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write8(0x31F4F078, a);
    }
    entry->Disable();
}

void  hi(MenuEntry *entry)
{
    Keyboard        keyboard("day");
    u8 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write8(0x31F4F079, a);
    }
    entry->Disable();
}

void  tantuki(MenuEntry *entry)
{
    Keyboard        keyboard("month");
    u8 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write8(0x31F4F074, a);
    }
    entry->Disable();
}
void  tanday(MenuEntry *entry)
{
    Keyboard        keyboard("day");
    u8 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write8(0x31F4F075, a);
    }
    entry->Disable();
}
void    aaaaa(MenuEntry *entry)
    {
        Process::Write32(0x327F580E, 0xF7511DC5);
    }
void    aaaab(MenuEntry *entry)
    {
        Process::Write32(0x327F5844, 0xF7512150);
    }
void    aaaac(MenuEntry *entry)
    {
        Process::Write32(0x327F5808, 0xF7511DC5);
    }
void    aaaae(MenuEntry *entry)
    {
        Process::Write32(0x327F580C, 0xF7511DC5);
    }
    //////////////////////////////////    Dress codes    ////////////////////////////////
	void  head(MenuEntry *entry)
{
    Keyboard        keyboard("Head・XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x31F49AA8, a);
    }
    entry->Disable();
}
void  Shirt(MenuEntry *entry)
{
    Keyboard        keyboard("Shirt XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x31F49AB0, a);
    }
    entry->Disable();
}
void  Accessories(MenuEntry *entry)
{
    Keyboard        keyboard("Accessories XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x31F49AAC, a);
    }
    entry->Disable();
}
void  Pants(MenuEntry *entry)
{
    Keyboard        keyboard("Pants XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x31F49AB8, a);
    }
    entry->Disable();
}
void  sox(MenuEntry *entry)
{
    Keyboard        keyboard("Sox XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x31F49ABC, a);
    }
    entry->Disable();
}
void  shoes(MenuEntry *entry)
{
    Keyboard        keyboard("Shoes XXXX0000\nX=itemid");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x31F49AC0, a);
    }
    entry->Disable();
}
    //////////////////////////////////    Door codes    ////////////////////////////////
	void	Reset(MenuEntry *entry)
    {
	    Process::Write32(0x3309A704,0x00030000);
		
    }	
	void	depart(MenuEntry *entry)
    {
	    Process::Write32(0x3309A704,0x00050000);
		
    }	
	void	dooropen(MenuEntry *entry)
    {
	    Process::Write32(0x3309A704,0x00000000);
		
    }	
	void	shotopen(MenuEntry *entry)
    {
	    Process::Write32(0x3309A704,0x05040000);
		
    }	
	//////////////////////////////////    Size codes    ///////////////////////////////
	void  AccessoriesSize(MenuEntry *entry)
{
    Keyboard        keyboard("Accessories Size XXXX0000\nX=Size Default=3F80");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x002710C8, a);
    }
    entry->Disable();
}
void  BuildingSize(MenuEntry *entry)
{
    Keyboard        keyboard("Building Size 0000XXXX\nX=Size Default=3F80");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x0052D306, a);
    }
    entry->Disable();
}
void  Big(MenuEntry *entry)
{
    Keyboard        keyboard("Effect Size XXXX0000\nX=Size Default=3F80");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x0054F3B4, a);
    }
    entry->Disable();
}
void  Hatsize(MenuEntry *entry)
{
    Keyboard        keyboard("Hat Size XXXX0000\nX=Size Default=3F80");
    u32 a;

    if (keyboard.Open (a) != -1) //-1 make sure theres input
    {
        Process::Write32(0x0023D9E0, a);
    }
    entry->Disable();

}

void    head2(MenuEntry *entry)
{
    if (Controller::IsKeysDown(Key::B + Y))
	{
        Process::Write32(0x001ACB5E,0x00003F80);
	}
	if (Controller::IsKeysDown(Key::DPadRight + Y))
	{   
	    Process::Write32(0x001ACB5E,0x00000000);
	}
}
    //////////////////////////////////    Badge codes    /////////////////////////////
	void	Allgold(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F13C,0x03030303);
		Process::Write32(0x31F4F140,0x03030303);
		Process::Write32(0x31F4F144,0x03030303);
		Process::Write32(0x31F4F148,0x03030303);
		Process::Write32(0x31F4F14C,0x03030303);
		Process::Write32(0x31F4F150,0x03030303);
		
    }	
	void	Allsilver(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F13C,0x02020202);
		Process::Write32(0x31F4F140,0x02020202);
		Process::Write32(0x31F4F144,0x02020202);
		Process::Write32(0x31F4F148,0x02020202);
		Process::Write32(0x31F4F14C,0x02020202);
		Process::Write32(0x31F4F150,0x02020202);
		
    }
	void	Allbronze(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F13C,0x01010101);
		Process::Write32(0x31F4F140,0x01010101);
		Process::Write32(0x31F4F144,0x01010101);
		Process::Write32(0x31F4F148,0x01010101);
		Process::Write32(0x31F4F14C,0x01010101);
		Process::Write32(0x31F4F150,0x01010101);
		
    }
	void	Allnone(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F13C,0x00000000);
		Process::Write32(0x31F4F140,0x00000000);
		Process::Write32(0x31F4F144,0x00000000);
		Process::Write32(0x31F4F148,0x00000000);
		Process::Write32(0x31F4F14C,0x00000000);
		Process::Write32(0x31F4F150,0x00000000);
		
    }	
	void	yumemi(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F13C,0xB2BCC6CF);
		Process::Write32(0x31F4F140,0x8A94B6A7);
		Process::Write32(0x31F4F144,0x7A6C8F7F);
		Process::Write32(0x31F4F148,0x3A436657);
		Process::Write32(0x31F4F14C,0x121C2530);
		Process::Write32(0x31F4F150,0x030C1620);
		
    }	
	void	okane(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F13C,0x434D5C61);
		Process::Write32(0x31F4F140,0x1B252F39);
		Process::Write32(0x31F4F144,0xABB50711);
		Process::Write32(0x31F4F148,0x6A747EF9);
		Process::Write32(0x31F4F14C,0xB34C5660);
		Process::Write32(0x31F4F150,0x1A242E38);
		
    }	
	void	densya(MenuEntry *entry)
    {
	    Process::Write32(0x31F4F13C,0x2A343E48);
		Process::Write32(0x31F4F140,0x020C1720);
		Process::Write32(0x31F4F144,0x07111B25);
		Process::Write32(0x31F4F148,0x5046505A);
		Process::Write32(0x31F4F14C,0x141E2832);
		Process::Write32(0x31F4F150,0xEA0A140A);
		
    }	
    //////////////////////////////////    Pursuit codes    ///////////////////////////////
	
	void    stalk1(MenuEntry *entry)
        {
            if (entry->Hotkeys[0].IsDown())
            {
      u32 loc;
      u32 outz;
      u32 outx;
      u32 inz;
      u32 inx;
        if(Process:: Read32(0x3309BC18, outz))
        if(Process:: Read32(0x3309BC10, outx))
          if(Process:: Read32(0x3309BD44, inz))
        if(Process:: Read32(0x3309BD3C, inx))

      
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        {
            if(Process:: Write32(0x33099E58, outz));
            if(Process:: Write32(0x33099E50, outx));
        }
        }
        else 
        {
        {
            if(Process:: Write32(0x33099F84, inz));
            if(Process:: Write32(0x33099F7C, inx));
        }
        }    
        
    }}

void    stalk2(MenuEntry *entry)
        {
            if (entry->Hotkeys[0].IsDown())
            {
      u32 loc;
      u32 outz;
      u32 outx;
      u32 inz;
      u32 inx;
        if(Process:: Read32(0x3309CD68, outz))
        if(Process:: Read32(0x3309CD60, outx))
          if(Process:: Read32(0x3309CE7C, inz))
        if(Process:: Read32(0x3309CE74, inx))

      
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        {
            if(Process:: Write32(0x33099E58, outz));
            if(Process:: Write32(0x33099E50, outx));
        }
        }
        else 
        {
        {
            if(Process:: Write32(0x33099F84, inz));
            if(Process:: Write32(0x33099F7C, inx));
        }
        }    
        
        }}
void    stalk3(MenuEntry *entry)
        {
            if (entry->Hotkeys[0].IsDown())
            {
      u32 loc;
      u32 outz;
      u32 outx;
      u32 inz;
      u32 inx;
        if(Process:: Read32(0x3309DEB4, outz))
        if(Process:: Read32(0x3309DEAC, outx))
          if(Process:: Read32(0x3309E204, inz))
        if(Process:: Read32(0x3309E1FC, inx))

      
    if(Process::Read32(0x33099F84, loc))
        if (loc == -1)
        {
        {
            if(Process:: Write32(0x33099E58, outz));
            if(Process:: Write32(0x33099E50, outx));
        }
        }
        else 
        {
        {
            if(Process:: Write32(0x33099F84, inz));
            if(Process:: Write32(0x33099F7C, inx));
        }
        }    
        
        }}
		struct aaaaaaaaItem
    {
        const char  *aaaaaaaaname;
        const u8    aaaaaaaaid;
    };

    static const std::vector<aaaaaaaaItem> g_aaaaaaaaitems =
    {
        { "\u30B4\u30DF\u7BB1", 0x2a },
        { "\u30E9\u30C3\u30D4\u30F3\u30B0", 0x2b },
        { "\u65E5\u306B\u3061", 0x2e },
        { "\u8A95\u751F\u65E5", 0x31 },
    }; 
        void    aaaaaaaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaaaaaaitems;

        if (aaaaaaaaitems.empty())
            for (const aaaaaaaaItem &i : g_aaaaaaaaitems)
                aaaaaaaaitems.push_back(i.aaaaaaaaname);

        Keyboard    keyboard("\u6A5F\u80FD\u3092\u9078\u3093\u3067\u304F\u3060\u3055\u3044\u3002", aaaaaaaaitems);
        int        aaaaaaaachoice = keyboard.Open();

        if (aaaaaaaachoice >= 0)
            Process::Write8(0x006D3064, g_aaaaaaaaitems[aaaaaaaachoice].aaaaaaaaid);    
        }
    void    aaabc(MenuEntry *entry)
    {
    Process::Write32(0x00951338, 0xA5030000);
    }
void    aaaaaaa(MenuEntry *entry)
    {
    Process::Write32(0x0098F420, 0x00000000);
    }
	
	struct aaaaaaaItem
    {
        const char  *aaaaaaaname;
        const u16    aaaaaaaid;
    };
static const std::vector<aaaaaaaItem> g_aaaaaaaitems =
    {
        { "\u30c0\u30a4\u30d6", 0x1c20 },
        { "\u30dd\u30f3\uff01", 0xccb0 },
        { "あっちむいて", 0xcb78 },
        { "手を振る", 0xd3b8 },
		{ "願い事", 0xc670 },
		{ "万歳", 0xdc50 },
		{ "転ぶ", 0x9f60 },
		{ "じゃんけん", 0xcb20 },
		{ "蚊に刺される", 0xa668 },
		{ "気絶から起き上がり", 0x9e98 },
		{ "豆まき", 0xce40 },
		{ "シャボン玉", 0x8fc0 },
		{ "クラッカー", 0x8d68 },
		{ "セーブできるようになりました", 0xe038 },
	};
        void    aaaaaaaInventoryModifier(MenuEntry *entry)
    {
        static StringVector aaaaaaaitems;

        if (aaaaaaaitems.empty())
            for (const aaaaaaaItem &i : g_aaaaaaaitems)
                aaaaaaaitems.push_back(i.aaaaaaaname);

        Keyboard    keyboard("モーションを選んでください", aaaaaaaitems);
        int        aaaaaaachoice = keyboard.Open();

        if (aaaaaaachoice >= 0)
            Process::Write16(0x33099FE6, g_aaaaaaaitems[aaaaaaachoice].aaaaaaaid);    
        }
	//////////////////////////////////    cmd codes    ///////////////////////////////
bool    re(const std::string &command)
{
    u32 addr = 0x32e14348 + ( chk_chat_online() * 0x0000C5A8 );
    std::string str;
    Process::ReadString(addr, str, 33, StringFormat::Utf16);
    if(str.find(command) != std::string::npos) return true;
    return false;
}



int    chk_chat_online()
{
u32 cmp32;
if (Process::Read32( 0x32E2A080, cmp32) && cmp32 == 0xCBBCBABB )
return 1;
else
return 0;
}

void    cmd(MenuEntry *entry)
{   
    {    
        if( re("clean") )
        {
            for(int i = 0;i<16; i++)
            {
                writeSlot(i, 0x7FFE);
            }
        }
		if( re("gset") )
        {
            for(int i = 0;i<6; i++)
            {
                writeSlot(i, 0x334f + (i * 4));
            }
        }
		if( re("dupe") )
		{
		    u32    dupe;
            {
                dupe = readSlot(0);
                writeSlot(1, dupe);
            }  
        }
		if( re("dAll") )
		{   
		    u32    dupe;
			{    
			    dupe = readSlot(0);
				writeSlot(1, dupe);
				writeSlot(2, dupe);
				writeSlot(3, dupe);
				writeSlot(4, dupe);
				writeSlot(5, dupe);
				writeSlot(6, dupe);
				writeSlot(7, dupe);
				writeSlot(8, dupe);
				writeSlot(9, dupe);
				writeSlot(10, dupe);
				writeSlot(11, dupe);
				writeSlot(12, dupe);
				writeSlot(13, dupe);
				writeSlot(14, dupe);
				writeSlot(15, dupe);
            }  
		}
        if( re("s1") )
        {    
            u32 loc;
            u32 outz;
            u32 outx;
            u32 inz;
            u32 inx;
            if(Process::Read32(0x3309BC18, outz))
            if(Process::Read32(0x3309BC10, outx))
            if(Process::Read32(0x3309BD44, inz))
            if(Process::Read32(0x3309BD3C, inx))	
			
			if(Process::Read32(0x33099F84, loc))
			    if (loc == -1)
			{
			    {
				    if(Process::Write32(0x33099E58, outz));
					if(Process::Write32(0x33099E50, outx));
				}
			}
			else
			{
			    {
				    if(Process::Write32(0x33099F84, inz));
				    if(Process::Write32(0x33099F7C, inx));
				}
			}
		}	    
        if( re("s2") )
        {    
            u32 loc;
            u32 outz;
            u32 outx;
            u32 inz;
            u32 inx;
            if(Process::Read32(0x3309CD68, outz))
            if(Process::Read32(0x3309CD60, outx))
            if(Process::Read32(0x3309CE7C, inz))
            if(Process::Read32(0x3309CE74, inx))	
			
			if(Process::Read32(0x33099F84, loc))
			    if (loc == -1)
			{
			    {
				    if(Process::Write32(0x33099E58, outz));
					if(Process::Write32(0x33099E50, outx));
				}
			}
			else
			{
			    {
				    if(Process::Write32(0x33099F84, inz));
				    if(Process::Write32(0x33099F7C, inx));
				}
			}
		}	    
        if( re("s3") )
        {    
            u32 loc;
            u32 outz;
            u32 outx;
            u32 inz;
            u32 inx;
            if(Process::Read32(0x3309DEB4, outz))
            if(Process::Read32(0x3309DEAC, outx))
            if(Process::Read32(0x3309E204, inz))
            if(Process::Read32(0x3309E1FC, inx))	
			
			if(Process::Read32(0x33099F84, loc))
			    if (loc == -1)
			{
			    {
				    if(Process::Write32(0x33099E58, outz));
					if(Process::Write32(0x33099E50, outx));
				}
			}
			else
			{
			    {
				    if(Process::Write32(0x33099F84, inz));
				    if(Process::Write32(0x33099F7C, inx));
				}
			}
		}
		if( re("mugen1") )
        {
            for(int i = 0;i<13; i++)
            {
                writeSlot(i, 0x2018 + i);
            }
        }
		if( re("mugen2") )
        {
            for(int i = 0;i<5; i++)
            {
                writeSlot(i, 0x2025 + i);
            }
        }
	}	

}  
    void    chatchange(MenuEntry *entry)
	{
		if( re("a") )
		{
		    Process::WriteString(0x32e14348, "@");
        }
		std::string text;
		if(Process::ReadString(0x32E14380, text, 0, StringFormat::Utf16) && text =="a")
		{    
		    Process::WriteString(0x32E14380, "@");
		}
		std::string text1;
		if(Process::ReadString(0x32E14358, text1, 0, StringFormat::Utf16) && text1 =="a")
		{    
		    Process::WriteString(0x32E14358, "@");
		}
	}
    //////////////////////////////////    house change    ///////////////////////////////
	struct houce1Item
    {
        const char  *houce1name;
        const u32    houce1id;
    };

    static const std::vector<houce1Item> g_houce1items =
    {
        { "四角い丸窓", 0x00100008 },
        { "四角い魚の窓", 0x00100108 },
		{ "四角い近未来", 0x00100208 },
		{ "四角い窓付き", 0x00100308 },
		{ "アラブな黄色", 0x00100408 },
		{ "四角い鉄", 0x00100508 },
		{ "四角いぼろい", 0x00100608 },
		{ "四角いお菓子", 0x00100708 },
		{ "四角いマーメイド", 0x00100808 },
		{ "四角い和風", 0x00100908 },
		{ "四角いログハウス", 0x00100A08 },
		{ "四角いメルヘン", 0x0010B08 },
		{ "四角い茶色", 0x00100C08 },
		{ "四角いアラブ", 0x00100D08 },
		{ "四角い重い", 0x00100E08 },
		{ "青いメルヘン", 0x00100F08 },
		{ "四角いベージュ", 0x00101008 },
		{ "四角い中華", 0x00101108 },
		{ "四角いピンク", 0x00101208 },
		{ "四角いカラフル", 0x00101308 },
		{ "四角いだけ", 0x00101408 },
		{ "黄金", 0x00101508 },
        
    }; 
        void    door3(MenuEntry *entry)
    {
        static StringVector houce1items;

        if (houce1items.empty())
            for (const houce1Item &i : g_houce1items)
                houce1items.push_back(i.houce1name);

        Keyboard    keyboard("ポスト変更", houce1items);
        int        houce1choice = keyboard.Open();

        if (houce1choice >= 0)
            Process::Write32(0x31FA7308, g_houce1items[houce1choice].houce1id);
    }
	
	struct houce2Item
    {
        const char  *houce2name;
        const u32    houce2id;
    };

    static const std::vector<houce2Item> g_houce2items =
    {
        { "赤い", 0x01000700 },
        { "金属", 0x01000701 },
		{ "青い", 0x01000702 },
		{ "黄色い", 0x01000703 },
		{ "オレンジ", 0x010007004 },
		{ "緑", 0x01000705 },
		{ "木", 0x01000706 },
		{ "白", 0x01000707 },
		{ "ピンク", 0x01000708 },
		{ "和風", 0x01000709 },
		{ "しょぼい", 0x0100070A },
		{ "ステンレス", 0x0100070B },
		{ "しかくい", 0x0100070C },
		{ "水色", 0x0100070D },
		{ "若葉色", 0x0100070E },
		{ "マーメイド", 0x0100070F },
		{ "リゾート", 0x01000710 },
		{ "メルヘン", 0x01000711 },
		{ "ロイヤル", 0x01000712 },
		{ "たる", 0x01000713 },
		{ "お菓子", 0x01000714 },
        
    }; 
        void    post(MenuEntry *entry)
    {
        static StringVector houce2items;

        if (houce2items.empty())
            for (const houce2Item &i : g_houce2items)
                houce2items.push_back(i.houce2name);

        Keyboard    keyboard("ポスト変更", houce2items);
        int        houce2choice = keyboard.Open();

        if (houce2choice >= 0)
            Process::Write32(0x31FA730C, g_houce2items[houce2choice].houce2id);
    }
	
	struct houce3Item
    {
        const char  *houce3name;
        const u32    houce3id;
    };

    static const std::vector<houce3Item> g_houce3items =
    {
        { "ペグとロープ", 0x00000408 },
        { "白", 0x00010408 },
		{ "丸太", 0x00020408 },
		{ "いけがき", 0x00030408 },
		{ "赤いマーメイド", 0x00040408 },
		{ "青いマーメイド", 0x00050408 },
		{ "ピンク", 0x00060408 },
		{ "メルヘン", 0x00070408 },
		{ "横坂", 0x00080408 },
		{ "曲線的", 0x00090408 },
		{ "青い", 0x000A0408 },
		{ "豪華", 0x000B0408 },
		{ "和風", 0x000C0408 },
		{ "有刺鉄線", 0x000D0408 },
		{ "お菓子", 0x000E0408 },
		{ "コンクリート", 0x000F0408 },
		{ "トタン", 0x00100408 },
		{ "竹", 0x00110408 },
		{ "渋い生垣", 0x00120408 },
		{ "白い", 0x00130408 },
		{ "黄金", 0x00140408 },
        
    }; 
        void    fence(MenuEntry *entry)
    {
        static StringVector houce3items;

        if (houce3items.empty())
            for (const houce3Item &i : g_houce3items)
                houce3items.push_back(i.houce3name);

        Keyboard    keyboard("フェンス変更", houce3items);
        int        houce3choice = keyboard.Open();

        if (houce3choice >= 0)
            Process::Write32(0x31FA7308, g_houce3items[houce3choice].houce3id);
    }
	
	struct houce4Item
    {
        const char  *houce4name;
        const u32    houce4id;
    };

    static const std::vector<houce4Item> g_houce4items =
    {
        { "いろとりどりなたまじゃり", 0x00100B08 },
        { "荒い石", 0x01100B08 },
		{ "レンガ", 0x02100B08 },
		{ "小石", 0x03100B08 },
		{ "四角", 0x04100B08 },
		{ "コンクリート", 0x05100B08 },
		{ "青いレンガ", 0x06100B08 },
		{ "ピンク", 0x07100B08 },
		{ "茶色", 0x08100B08 },
        
    }; 
        void    sikiisi(MenuEntry *entry)
    {
        static StringVector houce4items;

        if (houce4items.empty())
            for (const houce4Item &i : g_houce4items)
                houce4items.push_back(i.houce4name);

        Keyboard    keyboard("敷石変更", houce4items);
        int        houce4choice = keyboard.Open();

        if (houce4choice >= 0)
            Process::Write32(0x31FA7308, g_houce4items[houce4choice].houce4id);
    }
    
	
	void    underitem(MenuEntry *entry)
	{
	    u32 udr;
		if(Process::Read32(0x00948D88, udr))
		{
		    if (Controller::IsKeysDown(B + DPadDown))
			{
			    writeSlot(0 ,udr);
			}
		}
	}
	
    void    deleteall(MenuEntry *entry)
	{
	    if (Controller::IsKeysDown(B + R))
		{
		    for(int i = 0;i < 5000;i++)
			{
			    Process::Write32(0x31F9CED8 + (i*4),0x00007FFE);
			}
		}
	}
	
    void    add64(u64 addr, u64 vvv)
	{
		u64 aaa;
		Process::Read64(addr, aaa);
		Process::Write64(addr, aaa+vvv);
	}
	void    sub64(u64 addr, u64 vvv)
	{
		u64 aaa;
		Process::Read64(addr, aaa);
		Process::Write64(addr, aaa-vvv);
	}
    void    timetravel(MenuEntry *entry)
    {   
	    static bool pressed = false;
        if (Controller::IsKeysDown(B + DPadRight) && pressed==false)
	    {
		    pressed=true;
		    add64(0x31FABBA0, 0x34630B8A000);
			add64(0x956500, 0x34630B8A000);
		}
		if (Controller::IsKeysDown(B + DPadLeft) && pressed==false)
		{
		    pressed=true;
		    sub64(0x31FABBA0, 0x34630B8A000);
			sub64(0x956500, 0x34630B8A000);
		}
		if (!Controller::IsKeysDown(B + DPadDown) && !Controller::IsKeysDown(B + DPadUp))
        {
            pressed=false;
        }
		if (Controller::IsKeysDown(R + DPadRight))
		{
		    add64(0x31FABBA0, 0xDF8475800);
			add64(0x956500, 0xDF8475800);
		}
		if (Controller::IsKeysDown(R + DPadLeft))
		{
		    sub64(0x31FABBA0, 0xDF8475800);
			sub64(0x956500, 0xDF8475800);
		}
	}
	
	void   real(MenuEntry *entry)
	{
	    u32 x;
		u32 y;
		u32 reg0;
		u32 reg1;
		u32 ofset;
		static u32 item;
		int input;   
		{
		    x = READU32(0x3309A2B8);
		    y = READU32(0x3309A2BC);
			if(x >= 0x10 && y >= 0x10)
			{
			    x -= 0x10;
				y -= 0x10;
				reg0 = x % 0x10;
			    x /= 0x10;
			    reg1 = y % 0x10;
			    y /= 0x10;
			    reg0 *= 0x4;
			    reg1 *= 0x40;
			    x *= 0x400;
			    y *= 0x1400;
				ofset = reg0 + reg1 + x + y;
			    item = READU32(0x31F9CED8 + ofset);
			}
		}
		if (Controller::IsKeysDown(B + DPadDown))
		{    
		    x = READU32(0x3309A2B8);
		    y = READU32(0x3309A2BC);
			if(x >= 0x10 && y >= 0x10)
			{
			    x -= 0x10;
				y -= 0x10;
				reg0 = x % 0x10;
			    x /= 0x10;
			    reg1 = y % 0x10;
			    y /= 0x10;
			    reg0 *= 0x4;
			    reg1 *= 0x40;
			    x *= 0x400;
			    y *= 0x1400;
				ofset = reg0 + reg1 + x + y;
			        if(item != 0x0000)
			    writeSlot(0, item);
			}
		}
	}	
	
	#ifndef READU8
	
#  define READU8(addr)            *(vu32*)(addr)

#endif

	void    PWP_all(MenuEntry *entry)
	{
	    u8 player;
		int i;
		
		player = READU8(0xAD1410);
		
		if(player = 0x0)
		{
		    for(int i = 0; i < 20; i++)
			{
			    Process::Write8(0x31F772A8 + (0x1 * i), 0xff);
			}
		}
	}
	
	void    nook_common(int value)
	{
	    Process::Write16(0x31FABC64, 0x0101 *value);
		Process::Write8(0x31FB00F4, value == 1 ? 2 : value);
	}
	
	void    nook1(MenuEntry *entry)
	{
	    nook_common(1);
	}
	
	void    nook2(MenuEntry *entry)
	{
	    nook_common(2);
	}
	
	void    nook3(MenuEntry *entry)
	{
	    nook_common(3);
	}
	
	void    nook4(MenuEntry *entry)
	{
	    nook_common(4);
	}
	
	
	
    //////////////////////////////////    End of codes    ///////////////////////////////
	
	
	
	
}










