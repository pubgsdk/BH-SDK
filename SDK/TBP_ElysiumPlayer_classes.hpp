#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_ElysiumPlayer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_ElysiumPlayer.TBP_ElysiumPlayer_C
// 0x001F (0x1420 - 0x1401)
class ATBP_ElysiumPlayer_C : public ATBP_Player_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x1401(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1408(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetComponent*                            NameplateWidget;                                          // 0x1410(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystem*                             JoinLeaveElysiumParticle;                                 // 0x1418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_ElysiumPlayer.TBP_ElysiumPlayer_C"));
		return ptr;
	}


	void SpawnJoinLeaveParticle();
	void OnJoinedParty(const struct FTigerParty& InParty);
	void OnGotPlayerState();
	void OnLeftParty(const struct FTigerParty& InParty);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_TBP_ElysiumPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
