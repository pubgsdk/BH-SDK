#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_TigerSessionSeeker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C
// 0x0038 (0x01D0 - 0x0198)
class UTBP_TigerSessionSeeker_C : public UTigerSessionSeeker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0198(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FTigerBpFindSessionResultList               FindSessionResults;                                       // 0x01A0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class UTBP_TigerGameInstance_C*                    GameInstanceBP;                                           // 0x01C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_TigerSessionSeeker.TBP_TigerSessionSeeker_C"));
		return ptr;
	}


	void OnFailed_911A3FB24EB46568E8895DBD29076B9E();
	void OnSuccess_911A3FB24EB46568E8895DBD29076B9E();
	void SettingSynced_0F49896A4CCC5EF51613AEA169C1C444();
	void OnFailed_0146C451405A7ED2AEDCEF977F1EB70D();
	void OnSuccess_0146C451405A7ED2AEDCEF977F1EB70D(const struct FTigerBpFindSessionResultList& Result);
	void JoinBPImpl();
	void SeekBPImpl(const struct FString& InGameModeId, int InGameModeIndex, ESessionType InSessionType);
	void ServerSelectionCancelled();
	void OnServerSelected(const struct FTigerBpFindSessionSelectedSession& Session);
	void ExecuteUbergraph_TBP_TigerSessionSeeker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
