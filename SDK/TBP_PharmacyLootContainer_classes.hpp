#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_PharmacyLootContainer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C
// 0x0030 (0x0330 - 0x0300)
class ATBP_PharmacyLootContainer_C : public ATBP_LootContainerBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class URectLightComponent*                         RectLight;                                                // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Poster;                                                   // 0x0310(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OpenPoster_X_56CF5CE3433A77F38DF7629B75AEFB83;            // 0x0318(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	float                                              OpenPoster_Z_56CF5CE3433A77F38DF7629B75AEFB83;            // 0x031C(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    OpenPoster__Direction_56CF5CE3433A77F38DF7629B75AEFB83;   // 0x0320(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	class UTimelineComponent*                          OpenPoster;                                               // 0x0328(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_PharmacyLootContainer.TBP_PharmacyLootContainer_C"));
		return ptr;
	}


	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void OnSpawnLoot();
	void OpenPoster__FinishedFunc();
	void OpenPoster__UpdateFunc();
	void OpenPoster__Spawn_Loot__EventFunc();
	void OnAnimateOpen();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_PharmacyLootContainer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
