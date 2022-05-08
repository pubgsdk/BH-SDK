// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Item.TBP_Item_C.SpawnHeightenedSensesFX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::SpawnHeightenedSensesFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.SpawnHeightenedSensesFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.UpdateCustomStencilValue
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InDoRuntimeUpdate              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Item_C::UpdateCustomStencilValue(bool InDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.UpdateCustomStencilValue"));

	struct
	{
		bool                           InDoRuntimeUpdate;
	} params = {};

	params.InDoRuntimeUpdate = InDoRuntimeUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.SetCustomPrimitiveData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.SetCustomPrimitiveData"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.SetOutlineColor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           DoRuntimeUpdate                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Item_C::SetOutlineColor(const struct FLinearColor& Color, bool DoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.SetOutlineColor"));

	struct
	{
		struct FLinearColor            Color;
		bool                           DoRuntimeUpdate;
	} params = {};

	params.Color = Color;
	params.DoRuntimeUpdate = DoRuntimeUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.SetOutlineMaterialMaxDrawDistance
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          MaxDrawDistance                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Item_C::SetOutlineMaterialMaxDrawDistance(float MaxDrawDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.SetOutlineMaterialMaxDrawDistance"));

	struct
	{
		float                          MaxDrawDistance;
	} params = {};

	params.MaxDrawDistance = MaxDrawDistance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.SetOutlineBillboardScale
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*    SourceMesh                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Item_C::SetOutlineBillboardScale(class UStaticMeshComponent* SourceMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.SetOutlineBillboardScale"));

	struct
	{
		class UStaticMeshComponent*    SourceMesh;
	} params = {};

	params.SourceMesh = SourceMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.RemoveMapMarker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::RemoveMapMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.RemoveMapMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.CreateMapMarker
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::CreateMapMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.CreateMapMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.RefreshVisualRepresentation
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           InDoRuntimeUpdate              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Item_C::RefreshVisualRepresentation(bool InDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.RefreshVisualRepresentation"));

	struct
	{
		bool                           InDoRuntimeUpdate;
	} params = {};

	params.InDoRuntimeUpdate = InDoRuntimeUpdate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.HeightenedSensesTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Item_C::HeightenedSensesTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.HeightenedSensesTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.HeightenedSensesTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Item_C::HeightenedSensesTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.HeightenedSensesTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnHoverPointLightTimeline__FinishedFunc
// (FUNC_BlueprintEvent)

void ATBP_Item_C::OnHoverPointLightTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnHoverPointLightTimeline__FinishedFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnHoverPointLightTimeline__UpdateFunc
// (FUNC_BlueprintEvent)

void ATBP_Item_C::OnHoverPointLightTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnHoverPointLightTimeline__UpdateFunc"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnLoaded_003C666543064C6D05735C9CD06833A2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Item_C::OnLoaded_003C666543064C6D05735C9CD06833A2(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnLoaded_003C666543064C6D05735C9CD06833A2"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnLoaded_9732CF4F4A024DFD34CF8395AEEC0B29
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Item_C::OnLoaded_9732CF4F4A024DFD34CF8395AEEC0B29(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnLoaded_9732CF4F4A024DFD34CF8395AEEC0B29"));

	struct
	{
		class UObject*                 Loaded;
	} params = {};

	params.Loaded = Loaded;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.SetItemAsset
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UTigerItemAsset*         NewItemType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            NewItemCount                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Item_C::SetItemAsset(class UTigerItemAsset* NewItemType, int NewItemCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.SetItemAsset"));

	struct
	{
		class UTigerItemAsset*         NewItemType;
		int                            NewItemCount;
	} params = {};

	params.NewItemType = NewItemType;
	params.NewItemCount = NewItemCount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.SetItemOutlineVisible
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           ShowOutline                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Item_C::SetItemOutlineVisible(bool ShowOutline)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.SetItemOutlineVisible"));

	struct
	{
		bool                           ShowOutline;
	} params = {};

	params.ShowOutline = ShowOutline;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Item_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnEnterHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::OnEnterHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnEnterHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnEnterHeightenedSenseAreaInitial
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::OnEnterHeightenedSenseAreaInitial()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnEnterHeightenedSenseAreaInitial"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnLeaveHeightenedSenseArea
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::OnLeaveHeightenedSenseArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnLeaveHeightenedSenseArea"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.TryCreateMapMarker
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::TryCreateMapMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.TryCreateMapMarker"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.ReceiveEndPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Item_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.ReceiveEndPlay"));

	struct
	{
		TEnumAsByte<EEndPlayReason>    EndPlayReason;
	} params = {};

	params.EndPlayReason = EndPlayReason;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.ToggleUIVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.ToggleUIVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class AActor*                  OtherActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     OtherComp                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FVector                 NormalImpulse                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              Hit                            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void ATBP_Item_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature"));

	struct
	{
		class UPrimitiveComponent*     HitComponent;
		class AActor*                  OtherActor;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 NormalImpulse;
		struct FHitResult              Hit;
	} params = {};

	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.OnFinalTransformReceived
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              InFinalTransform               (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Item_C::OnFinalTransformReceived(const struct FTransform& InFinalTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.OnFinalTransformReceived"));

	struct
	{
		struct FTransform              InFinalTransform;
	} params = {};

	params.InFinalTransform = InFinalTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.MoveArtifactUp
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ATBP_Item_C::MoveArtifactUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.MoveArtifactUp"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Item.TBP_Item_C.ExecuteUbergraph_TBP_Item
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Item_C::ExecuteUbergraph_TBP_Item(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Item.TBP_Item_C.ExecuteUbergraph_TBP_Item"));

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
