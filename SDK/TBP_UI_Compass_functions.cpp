// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Compass_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Compass.TBP_UI_Compass_C.UpdateTextWidgets
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Compass_C::UpdateTextWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.UpdateTextWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.DrawText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvas*                 InCanvas                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TArray<struct FText>           TextArray                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            TextInterval                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CanvasHeight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::DrawText(class UCanvas* InCanvas, int TextInterval, int CanvasHeight, TArray<struct FText>* TextArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.DrawText"));

	struct
	{
		class UCanvas*                 InCanvas;
		TArray<struct FText>           TextArray;
		int                            TextInterval;
		int                            CanvasHeight;
	} params = {};

	params.InCanvas = InCanvas;
	params.TextInterval = TextInterval;
	params.CanvasHeight = CanvasHeight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TextArray != nullptr)
		*TextArray = params.TextArray;
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.DrawBackground
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvas*                 InCanvas                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CanvasHeight                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            CanvasWidth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::DrawBackground(class UCanvas* InCanvas, int CanvasHeight, int CanvasWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.DrawBackground"));

	struct
	{
		class UCanvas*                 InCanvas;
		int                            CanvasHeight;
		int                            CanvasWidth;
	} params = {};

	params.InCanvas = InCanvas;
	params.CanvasHeight = CanvasHeight;
	params.CanvasWidth = CanvasWidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.DrawLines
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvas*                 InCanvas                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NumLines                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InLineInterval                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InCanvasHeight                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::DrawLines(class UCanvas* InCanvas, int NumLines, int InLineInterval, int InCanvasHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.DrawLines"));

	struct
	{
		class UCanvas*                 InCanvas;
		int                            NumLines;
		int                            InLineInterval;
		int                            InCanvasHeight;
	} params = {};

	params.InCanvas = InCanvas;
	params.NumLines = NumLines;
	params.InLineInterval = InLineInterval;
	params.InCanvasHeight = InCanvasHeight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.UpdateTexture
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UCanvas*                 InCanvas                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InWidth                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            InHeight                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::UpdateTexture(class UCanvas* InCanvas, int InWidth, int InHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.UpdateTexture"));

	struct
	{
		class UCanvas*                 InCanvas;
		int                            InWidth;
		int                            InHeight;
	} params = {};

	params.InCanvas = InCanvas;
	params.InWidth = InWidth;
	params.InHeight = InHeight;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.InitCompassMaterial
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Compass_C::InitCompassMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.InitCompassMaterial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.UpdateCompassOrientation
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Compass_C::UpdateCompassOrientation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.UpdateCompassOrientation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Compass_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.Tick"));

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


// Function TBP_UI_Compass.TBP_UI_Compass_C.ShowCompassObject
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerCompassMarkerWidget* CompassObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::ShowCompassObject(class UTigerCompassMarkerWidget* CompassObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.ShowCompassObject"));

	struct
	{
		class UTigerCompassMarkerWidget* CompassObject;
	} params = {};

	params.CompassObject = CompassObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.HideCompassObject
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerCompassMarkerWidget* CompassObject                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::HideCompassObject(class UTigerCompassMarkerWidget* CompassObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.HideCompassObject"));

	struct
	{
		class UTigerCompassMarkerWidget* CompassObject;
	} params = {};

	params.CompassObject = CompassObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Compass.TBP_UI_Compass_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Compass_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.PreConstruct"));

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


// Function TBP_UI_Compass.TBP_UI_Compass_C.ExecuteUbergraph_TBP_UI_Compass
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Compass_C::ExecuteUbergraph_TBP_UI_Compass(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Compass.TBP_UI_Compass_C.ExecuteUbergraph_TBP_UI_Compass"));

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
