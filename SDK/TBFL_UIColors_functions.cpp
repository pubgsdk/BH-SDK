// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBFL_UIColors_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBFL_UIColors.TBFL_UIColors_C.GetColorByItemType
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UTigerItemAsset*         InItemAsset                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            OutColor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_UIColors_C::GetColorByItemType(class UTigerItemAsset* InItemAsset, class UObject* __WorldContext, struct FLinearColor* OutColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetColorByItemType"));

	struct
	{
		class UTigerItemAsset*         InItemAsset;
		class UObject*                 __WorldContext;
		struct FLinearColor            OutColor;
	} params = {};

	params.InItemAsset = InItemAsset;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutColor != nullptr)
		*OutColor = params.OutColor;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetOutlineColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerOutlineMode              InOutlineMode                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  InPlayerIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_UIColors_C::GetOutlineColor(ETigerOutlineMode InOutlineMode, unsigned char InPlayerIndex, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetOutlineColor"));

	struct
	{
		ETigerOutlineMode              InOutlineMode;
		unsigned char                  InPlayerIndex;
		class UObject*                 __WorldContext;
		struct FLinearColor            Color;
	} params = {};

	params.InOutlineMode = InOutlineMode;
	params.InPlayerIndex = InPlayerIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Color != nullptr)
		*Color = params.Color;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetBackgroundColorByPlayerStatus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ETBE_StatusIcon>   InPlayerStatus                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             OutAccentColor                 (CPF_Parm, CPF_OutParm)

void UTBFL_UIColors_C::GetBackgroundColorByPlayerStatus(TEnumAsByte<ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FSlateColor* OutAccentColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetBackgroundColorByPlayerStatus"));

	struct
	{
		TEnumAsByte<ETBE_StatusIcon>   InPlayerStatus;
		class UObject*                 __WorldContext;
		struct FSlateColor             OutAccentColor;
	} params = {};

	params.InPlayerStatus = InPlayerStatus;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutAccentColor != nullptr)
		*OutAccentColor = params.OutAccentColor;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetAccentColorByPlayerStatus
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// TEnumAsByte<ETBE_StatusIcon>   InPlayerStatus                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            OutAccentColor                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_UIColors_C::GetAccentColorByPlayerStatus(TEnumAsByte<ETBE_StatusIcon> InPlayerStatus, class UObject* __WorldContext, struct FLinearColor* OutAccentColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetAccentColorByPlayerStatus"));

	struct
	{
		TEnumAsByte<ETBE_StatusIcon>   InPlayerStatus;
		class UObject*                 __WorldContext;
		struct FLinearColor            OutAccentColor;
	} params = {};

	params.InPlayerStatus = InPlayerStatus;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutAccentColor != nullptr)
		*OutAccentColor = params.OutAccentColor;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetPlayerColorByIndex
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// unsigned char                  InPlayerIndex                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerColourSpace              InColorSpace                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            Color                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_UIColors_C::GetPlayerColorByIndex(unsigned char InPlayerIndex, ETigerColourSpace InColorSpace, class UObject* __WorldContext, struct FLinearColor* Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetPlayerColorByIndex"));

	struct
	{
		unsigned char                  InPlayerIndex;
		ETigerColourSpace              InColorSpace;
		class UObject*                 __WorldContext;
		struct FLinearColor            Color;
	} params = {};

	params.InPlayerIndex = InPlayerIndex;
	params.InColorSpace = InColorSpace;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Color != nullptr)
		*Color = params.Color;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorSlate
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerUIColor                  UIColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerColourSpace              ColorSpace                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateColor             SlateColor                     (CPF_Parm, CPF_OutParm)

void UTBFL_UIColors_C::GetUIColorSlate(ETigerUIColor UIColor, ETigerColourSpace ColorSpace, class UObject* __WorldContext, struct FSlateColor* SlateColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorSlate"));

	struct
	{
		ETigerUIColor                  UIColor;
		ETigerColourSpace              ColorSpace;
		class UObject*                 __WorldContext;
		struct FSlateColor             SlateColor;
	} params = {};

	params.UIColor = UIColor;
	params.ColorSpace = ColorSpace;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (SlateColor != nullptr)
		*SlateColor = params.SlateColor;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorAsText
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerUIColor                  UIColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerColourSpace              ColourSpace                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   ColorText                      (CPF_Parm, CPF_OutParm)

void UTBFL_UIColors_C::GetUIColorAsText(ETigerUIColor UIColor, ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FText* ColorText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetUIColorAsText"));

	struct
	{
		ETigerUIColor                  UIColor;
		ETigerColourSpace              ColourSpace;
		class UObject*                 __WorldContext;
		struct FText                   ColorText;
	} params = {};

	params.UIColor = UIColor;
	params.ColourSpace = ColourSpace;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ColorText != nullptr)
		*ColorText = params.ColorText;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetUIColor
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerUIColor                  UIColor                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerColourSpace              ColourSpace                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FLinearColor            LinearColor                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_UIColors_C::GetUIColor(ETigerUIColor UIColor, ETigerColourSpace ColourSpace, class UObject* __WorldContext, struct FLinearColor* LinearColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetUIColor"));

	struct
	{
		ETigerUIColor                  UIColor;
		ETigerColourSpace              ColourSpace;
		class UObject*                 __WorldContext;
		struct FLinearColor            LinearColor;
	} params = {};

	params.UIColor = UIColor;
	params.ColourSpace = ColourSpace;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function TBFL_UIColors.TBFL_UIColors_C.GetData
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerUIColorSet*        ColorSet                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBFL_UIColors_C::GetData(class UObject* __WorldContext, class UTigerUIColorSet** ColorSet)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBFL_UIColors.TBFL_UIColors_C.GetData"));

	struct
	{
		class UObject*                 __WorldContext;
		class UTigerUIColorSet*        ColorSet;
	} params = {};

	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (ColorSet != nullptr)
		*ColorSet = params.ColorSet;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
