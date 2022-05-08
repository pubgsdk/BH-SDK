#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_CheckLureTargetValidity_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_CheckLureTargetValidity.TBP_CheckLureTargetValidity_C
// 0x0034 (0x00CC - 0x0098)
class UTBP_CheckLureTargetValidity_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FBlackboardKeySelector                      LureTarget;                                               // 0x00A0(0x0028) (CPF_Edit, CPF_BlueprintVisible)
	float                                              LureRadiusSquared;                                        // 0x00C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_CheckLureTargetValidity.TBP_CheckLureTargetValidity_C"));
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_TBP_CheckLureTargetValidity(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
