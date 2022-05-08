#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Crossbow_Gas_Cloud_4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C
// 0x0008 (0x0518 - 0x0510)
class ACrossbow_Gas_Cloud_3_C : public ATigerAreaEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Crossbow_Gas_Cloud_4.Crossbow_Gas_Cloud_3_C"));
		return ptr;
	}


	void OnTriggerClient();
	void OnVehicleHit(class AActor* InActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Crossbow_Gas_Cloud_4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
