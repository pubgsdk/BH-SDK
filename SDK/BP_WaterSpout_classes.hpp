#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_WaterSpout_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WaterSpout.BP_WaterSpout_C
// 0x0020 (0x0260 - 0x0240)
class ABP_WaterSpout_C : public ATBP_WeatherPS_01_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0240(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    PS_WaterSpout;                                            // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector                                     Wind_Direction;                                           // 0x0250(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              Trace_Top_Margin;                                         // 0x025C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_WaterSpout.BP_WaterSpout_C"));
		return ptr;
	}


	void UpdateWeather();
	void UserConstructionScript();
	void UpdateWeatherComponents();
	void ExecuteUbergraph_BP_WaterSpout(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
