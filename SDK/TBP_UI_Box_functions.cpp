// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Box_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Box.TBP_UI_Box_C.ShouldSetSize
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           ShouldSetSize                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Box_C::ShouldSetSize(bool* ShouldSetSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.ShouldSetSize"));

	struct
	{
		bool                           ShouldSetSize;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ShouldSetSize != nullptr)
		*ShouldSetSize = params.ShouldSetSize;
}


// Function TBP_UI_Box.TBP_UI_Box_C.SetBorderOpacity
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          InOpacity                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Box_C::SetBorderOpacity(float InOpacity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.SetBorderOpacity"));

	struct
	{
		float                          InOpacity;
	} params = {};

	params.InOpacity = InOpacity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Box.TBP_UI_Box_C.SetBorderTexture
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UImage*                  ImageToSet                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              TextureToUse                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Box_C::SetBorderTexture(class UImage* ImageToSet, class UTexture2D* TextureToUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.SetBorderTexture"));

	struct
	{
		class UImage*                  ImageToSet;
		class UTexture2D*              TextureToUse;
	} params = {};

	params.ImageToSet = ImageToSet;
	params.TextureToUse = TextureToUse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Box.TBP_UI_Box_C.CalculateMargin
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Box_C::CalculateMargin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.CalculateMargin"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Box.TBP_UI_Box_C.SetupBorder
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Box_C::SetupBorder()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.SetupBorder"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Box.TBP_UI_Box_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Box_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.PreConstruct"));

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


// Function TBP_UI_Box.TBP_UI_Box_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Box_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Box.TBP_UI_Box_C.ExecuteUbergraph_TBP_UI_Box
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Box_C::ExecuteUbergraph_TBP_UI_Box(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Box.TBP_UI_Box_C.ExecuteUbergraph_TBP_UI_Box"));

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
