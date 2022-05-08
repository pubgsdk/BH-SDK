#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MightyLeap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MightyLeap.TBP_MightyLeap_C
// 0x0008 (0x0170 - 0x0168)
class UTBP_MightyLeap_C : public UTigerDisciplineJump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0168(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MightyLeap.TBP_MightyLeap_C"));
		return ptr;
	}


	struct FVector GetTargetPosition(const struct FVector& PlayerEyeLocation, const struct FRotator& CameraRotation, float JumpCheckDistance);
	void OnLeapEnded();
	void OnLeapStarted();
	void ExecuteUbergraph_TBP_MightyLeap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
