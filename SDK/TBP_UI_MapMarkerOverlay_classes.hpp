#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MapMarkerOverlay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C
// 0x0039 (0x02D1 - 0x0298)
class UTBP_UI_MapMarkerOverlay_C : public UTigerMapMarkerOverlay
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCanvasPanel*                                MapMarkerCanvas;                                          // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UCanvasPanel*                                StaticMarkerCanvas;                                       // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<class UTigerMapMarkerWidget*>               MapMarkers;                                               // 0x02B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference)
	struct FVector2D                                   PreviousCanvasSize;                                       // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTBP_UI_PlayerMarker_C*                      PlayerMarker;                                             // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsMinimap;                                               // 0x02D0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C"));
		return ptr;
	}


	void GetDynamicOrStaticPanel(class UTigerMapMarkerProxy* MapMarkerProxy, class UCanvasPanel** AsCanvas_Panel);
	void DoesMapMarkerForProxyExist(class UTigerMapMarkerProxy* InProxy, bool* bYes);
	void AddMapMarkersForWidgetClass(class UClass* /*UUserWidget*/ InRestrictToClass, class UTigerMapGameData* InMapData, bool bInFadeIn);
	void AddMapMarker(class UTigerMapMarkerProxy* InMapMarkerProxy, bool bInFadeIn, class UCanvasPanel* MarkerCanvas);
	void PreConstruct(bool IsDesignTime);
	void OnMapMarkerAddedEvent(class UTigerMapMarkerProxy* MapMarker);
	void OnMapMarkerRemovedEvent(class UTigerMapMarkerProxy* MapMarker);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InitializeMapMarkers(class UClass* /*UUserWidget*/ InRestrictToClass, bool bInFadeIn);
	void ExecuteUbergraph_TBP_UI_MapMarkerOverlay(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
