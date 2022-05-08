#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UnseenPresenceBuffInstance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C
// 0x000C (0x00A4 - 0x0098)
class UTBP_UnseenPresenceBuffInstance_C : public UTigerBuffUnseenPresenceInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	float                                              CurrentOpacity;                                           // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C"));
		return ptr;
	}


	void UpdateInvisibilityMaterial(float DeltaTime, class ATigerPlayer* Player, class UMaterialInstanceDynamic* MaterialInstance);
	void ExecuteUbergraph_TBP_UnseenPresenceBuffInstance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
