#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_WeatherActivatedObject_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C
// 0x0010 (0x0290 - 0x0280)
class ATBP_WeatherActivatedObject_01_C : public ATigerActivatedObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UBillboardComponent*                         EditorOnlyVisualizer;                                     // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void UpdateWeatherComponents();
	void ExecuteUbergraph_TBP_WeatherActivatedObject_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
