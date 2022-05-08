// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Disciplines_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.SetupCameOffCooldownAudio
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::SetupCameOffCooldownAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.SetupCameOffCooldownAudio"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.SetDisciplineSlotActiveState
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplineSlot           InSlot                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bInActivated                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Disciplines_C::SetDisciplineSlotActiveState(ETigerDisciplineSlot InSlot, bool bInActivated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.SetDisciplineSlotActiveState"));

	struct
	{
		ETigerDisciplineSlot           InSlot;
		bool                           bInActivated;
	} params = {};

	params.InSlot = InSlot;
	params.bInActivated = bInActivated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.UpdatePassiveWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::UpdatePassiveWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.UpdatePassiveWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.AddWidgetToCanvas
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerWidget*            Widget                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::AddWidgetToCanvas(class UTigerWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.AddWidgetToCanvas"));

	struct
	{
		class UTigerWidget*            Widget;
	} params = {};

	params.Widget = Widget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineIsRecharging
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplinesEnum          InDisciplineType               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_Disciplines_C::DisciplineIsRecharging(ETigerDisciplinesEnum InDisciplineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineIsRecharging"));

	struct
	{
		ETigerDisciplinesEnum          InDisciplineType;
		bool                           ReturnValue;
	} params = {};

	params.InDisciplineType = InDisciplineType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineRechargePercentage
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplinesEnum          InDisciplineType               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTBP_UI_Disciplines_C::DisciplineRechargePercentage(ETigerDisciplinesEnum InDisciplineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineRechargePercentage"));

	struct
	{
		ETigerDisciplinesEnum          InDisciplineType;
		float                          ReturnValue;
	} params = {};

	params.InDisciplineType = InDisciplineType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineRechargeRemainingSeconds
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplinesEnum          InDisciplineType               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UTBP_UI_Disciplines_C::DisciplineRechargeRemainingSeconds(ETigerDisciplinesEnum InDisciplineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineRechargeRemainingSeconds"));

	struct
	{
		ETigerDisciplinesEnum          InDisciplineType;
		int                            ReturnValue;
	} params = {};

	params.InDisciplineType = InDisciplineType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineIsVisible
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplineSlot           Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_Disciplines_C::DisciplineIsVisible(ETigerDisciplineSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineIsVisible"));

	struct
	{
		ETigerDisciplineSlot           Slot;
		bool                           ReturnValue;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineIsUnlocked
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplinesEnum          InDisciplineType               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_Disciplines_C::DisciplineIsUnlocked(ETigerDisciplinesEnum InDisciplineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineIsUnlocked"));

	struct
	{
		ETigerDisciplinesEnum          InDisciplineType;
		bool                           ReturnValue;
	} params = {};

	params.InDisciplineType = InDisciplineType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineCanBeUsed
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplineSlot           Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UTBP_UI_Disciplines_C::DisciplineCanBeUsed(ETigerDisciplineSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineCanBeUsed"));

	struct
	{
		ETigerDisciplineSlot           Slot;
		bool                           ReturnValue;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineCooldownPercentage
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplineSlot           Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

float UTBP_UI_Disciplines_C::DisciplineCooldownPercentage(ETigerDisciplineSlot Slot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineCooldownPercentage"));

	struct
	{
		ETigerDisciplineSlot           Slot;
		float                          ReturnValue;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineCooldownRemainingSeconds
// (FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// ETigerDisciplinesEnum          InDisciplineType               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

int UTBP_UI_Disciplines_C::DisciplineCooldownRemainingSeconds(ETigerDisciplinesEnum InDisciplineType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.DisciplineCooldownRemainingSeconds"));

	struct
	{
		ETigerDisciplinesEnum          InDisciplineType;
		int                            ReturnValue;
	} params = {};

	params.InDisciplineType = InDisciplineType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.InitializePowerCharges
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_PowerCharges_C*  PowerChargesUi                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerDisciplineSlot           DisciplineSlot                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::InitializePowerCharges(class UTBP_UI_PowerCharges_C* PowerChargesUi, ETigerDisciplineSlot DisciplineSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.InitializePowerCharges"));

	struct
	{
		class UTBP_UI_PowerCharges_C*  PowerChargesUi;
		ETigerDisciplineSlot           DisciplineSlot;
	} params = {};

	params.PowerChargesUi = PowerChargesUi;
	params.DisciplineSlot = DisciplineSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.GetSkillIcon
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplineSlot           Slot                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTexture2D*              UIIcon                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::GetSkillIcon(ETigerDisciplineSlot Slot, class UTexture2D** UIIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.GetSkillIcon"));

	struct
	{
		ETigerDisciplineSlot           Slot;
		class UTexture2D*              UIIcon;
	} params = {};

	params.Slot = Slot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (UIIcon != nullptr)
		*UIIcon = params.UIIcon;
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.Tick"));

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


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnLifeStatusChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerPlayerLifeStatus         NewLifeStatus                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::OnLifeStatusChanged(ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnLifeStatusChanged"));

	struct
	{
		ETigerPlayerLifeStatus         NewLifeStatus;
	} params = {};

	params.NewLifeStatus = NewLifeStatus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Disciplines_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.PreConstruct"));

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


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnSetNumberOfCharges
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplineSlot           DisciplineSlot                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::OnSetNumberOfCharges(ETigerDisciplineSlot DisciplineSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnSetNumberOfCharges"));

	struct
	{
		ETigerDisciplineSlot           DisciplineSlot;
	} params = {};

	params.DisciplineSlot = DisciplineSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnInitializeDisciplineUi
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::OnInitializeDisciplineUi()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnInitializeDisciplineUi"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnUpdatePassiveUI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::OnUpdatePassiveUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnUpdatePassiveUI"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnActivatedDiscipline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplinesEnum          InDiscipline                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::OnActivatedDiscipline(ETigerDisciplinesEnum InDiscipline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnActivatedDiscipline"));

	struct
	{
		ETigerDisciplinesEnum          InDiscipline;
	} params = {};

	params.InDiscipline = InDiscipline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnDeactivatedDiscipline
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplinesEnum          InDiscipline                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::OnDeactivatedDiscipline(ETigerDisciplinesEnum InDiscipline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnDeactivatedDiscipline"));

	struct
	{
		ETigerDisciplinesEnum          InDiscipline;
	} params = {};

	params.InDiscipline = InDiscipline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnHealthChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerPlayer*            InPlayer                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InOldHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          InNewHealth                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnHealthChanged"));

	struct
	{
		class ATigerPlayer*            InPlayer;
		float                          InOldHealth;
		float                          InNewHealth;
	} params = {};

	params.InPlayer = InPlayer;
	params.InOldHealth = InOldHealth;
	params.InNewHealth = InNewHealth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnUpdatePassiveActiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::OnUpdatePassiveActiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnUpdatePassiveActiveState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnDisciplineInterrupted
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// ETigerDisciplineSlot           InDisciplineSlot               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::OnDisciplineInterrupted(ETigerDisciplineSlot InDisciplineSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnDisciplineInterrupted"));

	struct
	{
		ETigerDisciplineSlot           InDisciplineSlot;
	} params = {};

	params.InDisciplineSlot = InDisciplineSlot;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.UpdatePassiveActiveState
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::UpdatePassiveActiveState()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.UpdatePassiveActiveState"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1
// (FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.On Respawn Set Opacity to 1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Disciplines_C::On_Respawn_Set_Opacity_to_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.On Respawn Set Opacity to 1"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnSilencedChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSilenced                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Disciplines_C::OnSilencedChanged(bool bIsSilenced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.OnSilencedChanged"));

	struct
	{
		bool                           bIsSilenced;
	} params = {};

	params.bIsSilenced = bIsSilenced;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.ExecuteUbergraph_TBP_UI_Disciplines
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Disciplines_C::ExecuteUbergraph_TBP_UI_Disciplines(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Disciplines.TBP_UI_Disciplines_C.ExecuteUbergraph_TBP_UI_Disciplines"));

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
