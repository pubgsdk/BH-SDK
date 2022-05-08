#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TigerPlayerCameraManager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C
// 0x0008 (0x2958 - 0x2950)
class ATBP_TigerPlayerCameraManager_C : public ATigerPlayerCameraManager
{
public:
	float                                              HighSpeedCameraTreshold;                                  // 0x2950(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinMoveSpeedForMeleeCamera;                               // 0x2954(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C"));
		return ptr;
	}


	void OnChangingCameraPreset(class UClass* /*UTigerCameraPreset*/ InCurrentCameraPresetClass, class UClass* /*UTigerCameraPreset*/ InNewCameraPresetClass);
	class UCurveFloat* SelectPresetTransitionCurve(class UTigerCameraPreset* InPreviousPreset, class UTigerCameraPreset* InNewPreset);
	class UClass* /*UTigerCameraPreset*/ EvaluateCameraPreset();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
