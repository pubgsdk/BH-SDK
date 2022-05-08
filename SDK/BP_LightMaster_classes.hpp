#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_LightMaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LightMaster.BP_LightMaster_C
// 0x0040 (0x0280 - 0x0240)
class ABP_LightMaster_C : public ATigerRebuildableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    PS_Lamp_Rain;                                             // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TArray<struct FLinearColor>                        MasterLightColors;                                        // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	int                                                LightColorSelector;                                       // 0x0260(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               RainOn;                                                   // 0x0264(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               ForceRainWhenUnderSomething;                              // 0x0265(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0266(0x0002) MISSED OFFSET
	TArray<struct FLinearColor>                        EmissiveColor;                                            // 0x0268(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UBP_LightMasterDataInterface_C*              LightMasterCDO;                                           // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_LightMaster.BP_LightMaster_C"));
		return ptr;
	}


	void SetMaterialAndPrimitiveData(const struct FVector4& InColor, class UPrimitiveComponent* InMesh, int InIndex);
	void SetCDO(TSoftClassPtr<class UClass> InData);
	void LineTraceLogic();
	void SetRainParticles(bool RainOn);
	void LightColorSelection(class ULightComponent* Light, struct FLinearColor* NewLightColor, struct FVector4* NewEmissiveColor, int* LightColorInt);
	void UserConstructionScript();
	void UpdateWeatherComponents();
	void ReceiveBeginPlay();
	void OnRebuild();
	void ExecuteUbergraph_BP_LightMaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
