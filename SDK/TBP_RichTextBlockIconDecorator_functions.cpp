// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_RichTextBlockIconDecorator_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForKeyInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FKey                    InKey                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTBP_RichTextBlockIconDecorator_C::GetBrushForKeyInternal(const struct FKey& InKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForKeyInternal"));

	struct
	{
		struct FKey                    InKey;
		struct FSlateBrush             ReturnValue;
	} params = {};

	params.InKey = InKey;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForAxisInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InName                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InScale                        (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTBP_RichTextBlockIconDecorator_C::GetBrushForAxisInternal(const struct FName& InName, float InScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForAxisInternal"));

	struct
	{
		struct FName                   InName;
		float                          InScale;
		struct FSlateBrush             ReturnValue;
	} params = {};

	params.InName = InName;
	params.InScale = InScale;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForActionInternal
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   InName                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FSlateBrush             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FSlateBrush UTBP_RichTextBlockIconDecorator_C::GetBrushForActionInternal(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C.GetBrushForActionInternal"));

	struct
	{
		struct FName                   InName;
		struct FSlateBrush             ReturnValue;
	} params = {};

	params.InName = InName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
