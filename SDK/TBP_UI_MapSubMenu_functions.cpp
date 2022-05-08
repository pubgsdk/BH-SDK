// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_MapSubMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnMouseButtonDoubleClick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               InMyGeometry                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           InMouseEvent                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_MapSubMenu_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnMouseButtonDoubleClick"));

	struct
	{
		struct FGeometry               InMyGeometry;
		struct FPointerEvent           InMouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.CreateEditorPreviewWidgets
// (FUNC_Private, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::CreateEditorPreviewWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.CreateEditorPreviewWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnMouseButtonDown
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// struct FPointerEvent           MouseEvent                     (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// struct FEventReply             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FEventReply UTBP_UI_MapSubMenu_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnMouseButtonDown"));

	struct
	{
		struct FGeometry               MyGeometry;
		struct FPointerEvent           MouseEvent;
		struct FEventReply             ReturnValue;
	} params = {};

	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.FormatElapsedTime
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// float                          ElapsedSeconds                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FText                   FormatedTime                   (CPF_Parm, CPF_OutParm)

void UTBP_UI_MapSubMenu_C::FormatElapsedTime(float ElapsedSeconds, struct FText* FormatedTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.FormatElapsedTime"));

	struct
	{
		float                          ElapsedSeconds;
		struct FText                   FormatedTime;
	} params = {};

	params.ElapsedSeconds = ElapsedSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FormatedTime != nullptr)
		*FormatedTime = params.FormatedTime;
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.TriggerWorldPing
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::TriggerWorldPing()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.TriggerWorldPing"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.TriggerTeleport
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEvent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)

void UTBP_UI_MapSubMenu_C::TriggerTeleport(const struct FPointerEvent& PointerEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.TriggerTeleport"));

	struct
	{
		struct FPointerEvent           PointerEvent;
	} params = {};

	params.PointerEvent = PointerEvent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_MapSubMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.PreConstruct"));

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


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapSubMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.Tick"));

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


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.ShowMatchTimer
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::ShowMatchTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.ShowMatchTimer"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnOpen
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnOpen"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnClose
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnClose"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.CloseMap
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::CloseMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.CloseMap"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OpenSettings
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::OpenSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OpenSettings"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.AlternateActionPad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::AlternateActionPad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.AlternateActionPad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.AttackPad
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::AttackPad()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.AttackPad"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.BlockArchetypePower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::BlockArchetypePower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.BlockArchetypePower"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.BlockClanPower
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::BlockClanPower()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.BlockClanPower"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.bLock
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_MapSubMenu_C::bLock()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.bLock"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnQuestCompleted
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 InQuestId                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapSubMenu_C::OnQuestCompleted(const struct FString& InQuestId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.OnQuestCompleted"));

	struct
	{
		struct FString                 InQuestId;
	} params = {};

	params.InQuestId = InQuestId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.ExecuteUbergraph_TBP_UI_MapSubMenu
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_MapSubMenu_C::ExecuteUbergraph_TBP_UI_MapSubMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_MapSubMenu.TBP_UI_MapSubMenu_C.ExecuteUbergraph_TBP_UI_MapSubMenu"));

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
