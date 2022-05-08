#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ProjectionDash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ProjectionDash.TBP_ProjectionDash_C
// 0x000C (0x017C - 0x0170)
class UTBP_ProjectionDash_C : public UTigerDisciplineProjectionDash
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              FullscreenFurthestFocusPoint;                             // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ProjectionDash.TBP_ProjectionDash_C"));
		return ptr;
	}


	void OnDashStart();
	void OnDashEnd();
	void UpdateFocusPoint();
	void ExecuteUbergraph_TBP_ProjectionDash(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
