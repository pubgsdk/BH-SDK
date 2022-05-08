#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcess_ProjectionDash_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C
// 0x0037 (0x0298 - 0x0261)
class ATBP_BuffPostProcess_ProjectionDash_C : public ATBP_BuffPostProcess_Master_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UMaterialInterface*                          Material;                                                 // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                    // 0x0278(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    Tick;                                                     // 0x0288(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C"));
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash(int EntryPoint);
	void Tick__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
