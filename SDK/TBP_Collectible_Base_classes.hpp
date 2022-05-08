#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Collectible_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Collectible_Base.TBP_Collectible_Base_C
// 0x000C (0x02BC - 0x02B0)
class ATBP_Collectible_Base_C : public ATigerInteractiveCollectible
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              ScreenSizeCullAmount;                                     // 0x02B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Collectible_Base.TBP_Collectible_Base_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_Collectible_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
