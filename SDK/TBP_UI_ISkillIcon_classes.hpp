#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ISkillIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C
// 0x0000 (0x0028 - 0x0028)
class UTBP_UI_ISkillIcon_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_UI_ISkillIcon.TBP_UI_ISkillIcon_C"));
		return ptr;
	}


	void OnInterrupted();
	void SetActiveTimeLeft(int SecondsLeftCeil);
	void SetCooldown(int SecondsLeftCeil, float Percentage);
	void SetSkillData(bool bIsUnlocked, bool bHasCharge, bool bCanBeUsed, int ChargeCount);
	void SetSkillIcon(class UTexture2D* IconTexture);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
