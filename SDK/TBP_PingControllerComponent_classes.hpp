#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PingControllerComponent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PingControllerComponent.TBP_PingControllerComponent_C
// 0x0000 (0x0250 - 0x0250)
class UTBP_PingControllerComponent_C : public UTigerPingControllerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PingControllerComponent.TBP_PingControllerComponent_C"));
		return ptr;
	}


	void AddHealthStatusToWheel(class ATigerPlayerState* inTigerPlayerState, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
	void AddMasqueradeStatusToWheel(class UTigerPlayerMasqueradeComponent* InMasqueradeComponent, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
	void AddAmmoRequestToWheel(TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
	void AddPointsOfInterest(TArray<struct FTigerPingWorldNetData>* OutWheelItemPings);
	void GetDefaultLocation(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult>* InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems, struct FVector* OutLocation, bool* bOutFoundLocation);
	void GetAddPingTypes(const struct FVector& InLocation, TArray<class UClass* /*UTigerPingBase*/>* InPingTypes, TArray<struct FTigerPingWorldNetData>* InOutResults);
	void GetPingWheelItems(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult> InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
