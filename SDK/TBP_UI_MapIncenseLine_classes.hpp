#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MapIncenseLine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MapIncenseLine.TBP_UI_MapIncenseLine_C
// 0x0030 (0x02B0 - 0x0280)
class UTBP_UI_MapIncenseLine_C : public UTigerMapIncenseLine
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      IncenseLineImage;                                         // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FVector2D                                   StartPositionOld;                                         // 0x0290(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FVector2D                                   EndPositionOld;                                           // 0x0298(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    LineMaterial;                                             // 0x02A0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   ActualEndPositionOld;                                     // 0x02A8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MapIncenseLine.TBP_UI_MapIncenseLine_C"));
		return ptr;
	}


	void ResetLinePositionOld();
	void UpdateLinePositionOld();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnInitialized();
	void ExternalUpdateLinePosition();
	void ExternalResetLinePosition();
	void ExecuteUbergraph_TBP_UI_MapIncenseLine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
