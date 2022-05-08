// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_CompassObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetCompassObjectScreenMinMax
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Screen_Pos_Min                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          Screen_Pos_Max                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CompassObject_C::GetCompassObjectScreenMinMax(float* Screen_Pos_Min, float* Screen_Pos_Max)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetCompassObjectScreenMinMax"));

	struct
	{
		float                          Screen_Pos_Min;
		float                          Screen_Pos_Max;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Screen_Pos_Min != nullptr)
		*Screen_Pos_Min = params.Screen_Pos_Min;
	if (Screen_Pos_Max != nullptr)
		*Screen_Pos_Max = params.Screen_Pos_Max;
}


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetProximityToCompassAreaCenter
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          _0_1_Proximity                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CompassObject_C::GetProximityToCompassAreaCenter(float* _0_1_Proximity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetProximityToCompassAreaCenter"));

	struct
	{
		float                          _0_1_Proximity;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (_0_1_Proximity != nullptr)
		*_0_1_Proximity = params._0_1_Proximity;
}


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetObjectImageSizeX
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Image_Size_X                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CompassObject_C::GetObjectImageSizeX(float* Image_Size_X)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetObjectImageSizeX"));

	struct
	{
		float                          Image_Size_X;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Image_Size_X != nullptr)
		*Image_Size_X = params.Image_Size_X;
}


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetCompassAreaSizeX
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          Compass_Area_Size_X            (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CompassObject_C::GetCompassAreaSizeX(float* Compass_Area_Size_X)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.GetCompassAreaSizeX"));

	struct
	{
		float                          Compass_Area_Size_X;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Compass_Area_Size_X != nullptr)
		*Compass_Area_Size_X = params.Compass_Area_Size_X;
}


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.UpdatePosition
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_CompassObject_C::UpdatePosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.UpdatePosition"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_CompassObject_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CompassObject_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.Tick"));

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


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.SetColorBasedOnPlayerIndex
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// unsigned char                  InIndex                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CompassObject_C::SetColorBasedOnPlayerIndex(unsigned char InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.SetColorBasedOnPlayerIndex"));

	struct
	{
		unsigned char                  InIndex;
	} params = {};

	params.InIndex = InIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.ExecuteUbergraph_TBP_UI_CompassObject
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_CompassObject_C::ExecuteUbergraph_TBP_UI_CompassObject(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_CompassObject.TBP_UI_CompassObject_C.ExecuteUbergraph_TBP_UI_CompassObject"));

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
