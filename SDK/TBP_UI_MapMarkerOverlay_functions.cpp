// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MapMarkerOverlay_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.GetDynamicOrStaticPanel
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMapMarkerProxy*    MapMarkerProxy                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UCanvasPanel*            AsCanvas_Panel                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)

void UTBP_UI_MapMarkerOverlay_C::GetDynamicOrStaticPanel(class UTigerMapMarkerProxy* MapMarkerProxy, class UCanvasPanel** AsCanvas_Panel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.GetDynamicOrStaticPanel"));

	struct
	{
		class UTigerMapMarkerProxy*    MapMarkerProxy;
		class UCanvasPanel*            AsCanvas_Panel;
	} params = {};

	params.MapMarkerProxy = MapMarkerProxy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AsCanvas_Panel != nullptr)
		*AsCanvas_Panel = params.AsCanvas_Panel;
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.DoesMapMarkerForProxyExist
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerMapMarkerProxy*    InProxy                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bYes                           (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MapMarkerOverlay_C::DoesMapMarkerForProxyExist(class UTigerMapMarkerProxy* InProxy, bool* bYes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.DoesMapMarkerForProxyExist"));

	struct
	{
		class UTigerMapMarkerProxy*    InProxy;
		bool                           bYes;
	} params = {};

	params.InProxy = InProxy;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (bYes != nullptr)
		*bYes = params.bYes;
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.AddMapMarkersForWidgetClass
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  InRestrictToClass              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerMapGameData*       InMapData                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInFadeIn                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MapMarkerOverlay_C::AddMapMarkersForWidgetClass(class UClass* /*UUserWidget*/ InRestrictToClass, class UTigerMapGameData* InMapData, bool bInFadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.AddMapMarkersForWidgetClass"));

	struct
	{
		class UClass* /*UUserWidget*/  InRestrictToClass;
		class UTigerMapGameData*       InMapData;
		bool                           bInFadeIn;
	} params = {};

	params.InRestrictToClass = InRestrictToClass;
	params.InMapData = InMapData;
	params.bInFadeIn = bInFadeIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.AddMapMarker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMapMarkerProxy*    InMapMarkerProxy               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInFadeIn                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
// class UCanvasPanel*            MarkerCanvas                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapMarkerOverlay_C::AddMapMarker(class UTigerMapMarkerProxy* InMapMarkerProxy, bool bInFadeIn, class UCanvasPanel* MarkerCanvas)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.AddMapMarker"));

	struct
	{
		class UTigerMapMarkerProxy*    InMapMarkerProxy;
		bool                           bInFadeIn;
		class UCanvasPanel*            MarkerCanvas;
	} params = {};

	params.InMapMarkerProxy = InMapMarkerProxy;
	params.bInFadeIn = bInFadeIn;
	params.MarkerCanvas = MarkerCanvas;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MapMarkerOverlay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.OnMapMarkerAddedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMapMarkerProxy*    MapMarker                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapMarkerOverlay_C::OnMapMarkerAddedEvent(class UTigerMapMarkerProxy* MapMarker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.OnMapMarkerAddedEvent"));

	struct
	{
		class UTigerMapMarkerProxy*    MapMarker;
	} params = {};

	params.MapMarker = MapMarker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.OnMapMarkerRemovedEvent
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerMapMarkerProxy*    MapMarker                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapMarkerOverlay_C::OnMapMarkerRemovedEvent(class UTigerMapMarkerProxy* MapMarker)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.OnMapMarkerRemovedEvent"));

	struct
	{
		class UTigerMapMarkerProxy*    MapMarker;
	} params = {};

	params.MapMarker = MapMarker;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapMarkerOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.Tick"));

	struct
	{
		struct FGeometry               MyGeometry;
		float                          InDeltaTime;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.InitializeMapMarkers
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UClass* /*UUserWidget*/  InRestrictToClass              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInFadeIn                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MapMarkerOverlay_C::InitializeMapMarkers(class UClass* /*UUserWidget*/ InRestrictToClass, bool bInFadeIn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.InitializeMapMarkers"));

	struct
	{
		class UClass* /*UUserWidget*/  InRestrictToClass;
		bool                           bInFadeIn;
	} params = {};

	params.InRestrictToClass = InRestrictToClass;
	params.bInFadeIn = bInFadeIn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.ExecuteUbergraph_TBP_UI_MapMarkerOverlay
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapMarkerOverlay_C::ExecuteUbergraph_TBP_UI_MapMarkerOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapMarkerOverlay.TBP_UI_MapMarkerOverlay_C.ExecuteUbergraph_TBP_UI_MapMarkerOverlay"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
