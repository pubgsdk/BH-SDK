#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcessHandler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C
// 0x00A8 (0x02A8 - 0x0200)
class UTBP_BuffPostProcessHandler_C : public USceneComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	TMap<int, class ATBP_BuffPostProcess_Master_C*>    ActiveList;                                               // 0x0208(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TMap<int, class ATBP_BuffPostProcess_Master_C*>    ActiveConsumableList;                                     // 0x0258(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C"));
		return ptr;
	}


	void GetConsumableBuffDuration(class UTigerConsumableAsset* InConsumable, float* OutDuration);
	void GetConsumableID(class UTigerConsumableAsset* InConsumable, int* OutID);
	void AddPostProcess(class UClass* /*ATigerBuffPostProcess*/ PostProcess, float Duration, int ID, class ATBP_BuffPostProcess_Master_C** PostProcessActor);
	void ReceiveBeginPlay();
	void OnBuffAdded(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRefreshed(class UTigerBuff* Buff, int ID, float Duration);
	void OnBuffRemoved(class UTigerBuff* Buff, int ID, float Duration);
	void OnClientBuffIdUpdated(int OldId, int NewId);
	void OnUseConsumableStarted(class UTigerConsumableAsset* Consumable);
	void OnUseConsumableFinished(class UTigerConsumableAsset* Consumable);
	void OnUseConsumableCancelled(class UTigerConsumableAsset* Consumable);
	void ExecuteUbergraph_TBP_BuffPostProcessHandler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
