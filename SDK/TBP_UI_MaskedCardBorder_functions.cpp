// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MaskedCardBorder_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOpacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWeatheringOpacity            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetWeatheringOpacity(float InWeatheringOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOpacity"));

	struct
	{
		float                          InWeatheringOpacity;
	} params = {};

	params.InWeatheringOpacity = InWeatheringOpacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.RandomizeWeatheringOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MaskedCardBorder_C::RandomizeWeatheringOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.RandomizeWeatheringOffset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOffset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FVector2D               InWeatheringOffset             (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetWeatheringOffset(const struct FVector2D& InWeatheringOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringOffset"));

	struct
	{
		struct FVector2D               InWeatheringOffset;
	} params = {};

	params.InWeatheringOffset = InWeatheringOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringScale
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWeatheringScale              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetWeatheringScale(float InWeatheringScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringScale"));

	struct
	{
		float                          InWeatheringScale;
	} params = {};

	params.InWeatheringScale = InWeatheringScale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringFadeWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWeatheringFadeWidth          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetWeatheringFadeWidth(float InWeatheringFadeWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringFadeWidth"));

	struct
	{
		float                          InWeatheringFadeWidth;
	} params = {};

	params.InWeatheringFadeWidth = InWeatheringFadeWidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InWeatheringWidth              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetWeatheringWidth(float InWeatheringWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringWidth"));

	struct
	{
		float                          InWeatheringWidth;
	} params = {};

	params.InWeatheringWidth = InWeatheringWidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTexture2D*              InWeatheringTexture            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetWeatheringTexture(class UTexture2D* InWeatheringTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetWeatheringTexture"));

	struct
	{
		class UTexture2D*              InWeatheringTexture;
	} params = {};

	params.InWeatheringTexture = InWeatheringTexture;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            InBorderColor                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetBorderColor(const struct FLinearColor& InBorderColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderColor"));

	struct
	{
		struct FLinearColor            InBorderColor;
	} params = {};

	params.InBorderColor = InBorderColor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderWidth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InBorderWidth                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetBorderWidth(float InBorderWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetBorderWidth"));

	struct
	{
		float                          InBorderWidth;
	} params = {};

	params.InBorderWidth = InBorderWidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetCornerRadius
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InCornerRadius                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::SetCornerRadius(float InCornerRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.SetCornerRadius"));

	struct
	{
		float                          InCornerRadius;
	} params = {};

	params.InCornerRadius = InCornerRadius;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.InitializeParameters
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MaskedCardBorder_C::InitializeParameters()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.InitializeParameters"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_MaskedCardBorder_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.ExecuteUbergraph_TBP_UI_MaskedCardBorder
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MaskedCardBorder_C::ExecuteUbergraph_TBP_UI_MaskedCardBorder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MaskedCardBorder.TBP_UI_MaskedCardBorder_C.ExecuteUbergraph_TBP_UI_MaskedCardBorder"));

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
