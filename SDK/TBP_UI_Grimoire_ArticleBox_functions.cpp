// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_Grimoire_ArticleBox_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ResetScroll
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleBox_C::ResetScroll()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ResetScroll"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleRandom
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     GrimoireEntry                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleBox_C::AddArticleRandom(class UTigerGrimoireEntry* GrimoireEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleRandom"));

	struct
	{
		class UTigerGrimoireEntry*     GrimoireEntry;
	} params = {};

	params.GrimoireEntry = GrimoireEntry;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetNewArticleEntryIDs
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         EntryIds                       (CPF_Parm, CPF_OutParm)

void UTBP_UI_Grimoire_ArticleBox_C::GetNewArticleEntryIDs(TArray<struct FString>* EntryIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetNewArticleEntryIDs"));

	struct
	{
		TArray<struct FString>         EntryIds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EntryIds != nullptr)
		*EntryIds = params.EntryIds;
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleDouble
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     GrimoireEntry1                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTigerGrimoireEntry*     GrimoireEntry2                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerGrimoireArticleType      ArticleType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleBox_C::AddArticleDouble(class UTigerGrimoireEntry* GrimoireEntry1, class UTigerGrimoireEntry* GrimoireEntry2, ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticleDouble"));

	struct
	{
		class UTigerGrimoireEntry*     GrimoireEntry1;
		class UTigerGrimoireEntry*     GrimoireEntry2;
		ETigerGrimoireArticleType      ArticleType;
	} params = {};

	params.GrimoireEntry1 = GrimoireEntry1;
	params.GrimoireEntry2 = GrimoireEntry2;
	params.ArticleType = ArticleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticle
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTigerGrimoireEntry*     GrimoireEntry                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// ETigerGrimoireArticleType      ArticleType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleBox_C::AddArticle(class UTigerGrimoireEntry* GrimoireEntry, ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.AddArticle"));

	struct
	{
		class UTigerGrimoireEntry*     GrimoireEntry;
		ETigerGrimoireArticleType      ArticleType;
	} params = {};

	params.GrimoireEntry = GrimoireEntry;
	params.ArticleType = ArticleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.CreateArticleLinks
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UTBP_UI_Grimoire_C*      GrimoireUI                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            TotalArticles                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleBox_C::CreateArticleLinks(class UTBP_UI_Grimoire_C* GrimoireUI, class UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI, int* TotalArticles)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.CreateArticleLinks"));

	struct
	{
		class UTBP_UI_Grimoire_C*      GrimoireUI;
		class UTBP_UI_Grimoire_Landing_C* GrimoireLandingUI;
		int                            TotalArticles;
	} params = {};

	params.GrimoireUI = GrimoireUI;
	params.GrimoireLandingUI = GrimoireLandingUI;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TotalArticles != nullptr)
		*TotalArticles = params.TotalArticles;
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetTestEntries
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         EntryIds                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// TArray<class UTigerGrimoireEntry*> Entries                        (CPF_Parm, CPF_OutParm)

void UTBP_UI_Grimoire_ArticleBox_C::GetTestEntries(TArray<struct FString>* EntryIds, TArray<class UTigerGrimoireEntry*>* Entries)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.GetTestEntries"));

	struct
	{
		TArray<struct FString>         EntryIds;
		TArray<class UTigerGrimoireEntry*> Entries;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (EntryIds != nullptr)
		*EntryIds = params.EntryIds;
	if (Entries != nullptr)
		*Entries = params.Entries;
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ClearArticleLinks
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleBox_C::ClearArticleLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ClearArticleLinks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UTBP_UI_Grimoire_ArticleBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.PreConstruct"));

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


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UTBP_UI_Grimoire_ArticleBox_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Tick
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor)
// float                          InDeltaTime                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.Tick"));

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


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ArticleSelected
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 EntryId                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// ETigerGrimoireArticleType      ArticleType                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleBox_C::ArticleSelected(const struct FString& EntryId, ETigerGrimoireArticleType ArticleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ArticleSelected"));

	struct
	{
		struct FString                 EntryId;
		ETigerGrimoireArticleType      ArticleType;
	} params = {};

	params.EntryId = EntryId;
	params.ArticleType = ArticleType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UI_Grimoire_ArticleBox_C::ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UI_Grimoire_ArticleBox.TBP_UI_Grimoire_ArticleBox_C.ExecuteUbergraph_TBP_UI_Grimoire_ArticleBox"));

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
