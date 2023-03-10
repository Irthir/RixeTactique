// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Figurines.generated.h"

//Énumérateur des figurines
UENUM(BlueprintType)
enum class EFigurine : uint8
{
	Guerrier UMETA(DisplayName = "Guerrier"),
	Mage UMETA(DisplayName = "Mage"),
	Voleur UMETA(DisplayName = "Voleur"),
	Eclaireur UMETA(DisplayName = "Eclaireur"),
	Pretre UMETA(DisplayName = "Pretre"),
	Protecteur UMETA(DisplayName = "Protecteur"),

	//Les ennemis
	Gobelin UMETA(DisplayName = "Gobelin"),
	Squelette UMETA(DisplayName = "Squelette"),
	Orc UMETA(DisplayName = "Orc"),
	Armure UMETA(DisplayName = "Armure"),
	Boss UMETA(DisplayName = "Boss"),
};

inline TMap<EFigurine,FString> EFigurineMap ={
	{EFigurine::Guerrier, "Guerrier"},
	{EFigurine::Mage, "Mage"},
	{EFigurine::Voleur, "Voleur"},
	{EFigurine::Eclaireur, "Eclaireur"},
	{EFigurine::Pretre, "Pretre"},
	{EFigurine::Protecteur, "Protecteur"},

	//Les ennemis
	{EFigurine::Gobelin, "Gobelin"},
	{EFigurine::Squelette, "Squelette"},
	{EFigurine::Orc, "Orc"},
	{EFigurine::Armure, "Armure"},
	{EFigurine::Boss, "Boss"},
};


//Énumérateur des effets
UENUM(BlueprintType)
enum class EEffetFigurine : uint8
{
	Aucun UMETA(DisplayName = "Aucun"),
	DesarmerPiege UMETA(DisplayName = "DesarmerPiege"),
	VisionCase UMETA(DisplayName = "VisionCase"),
	Encaissement UMETA(DisplayName = "Encaissement"),
};

inline TMap<EEffetFigurine,FString> EEffetFigurineMap ={
	{EEffetFigurine::Aucun, "Aucun"},
	{EEffetFigurine::DesarmerPiege, "DesarmerPiege"},
	{EEffetFigurine::VisionCase, "VisionCase"},
	{EEffetFigurine::Encaissement, "Encaissement"},
};

//Structure d'une figurine en jeu.
USTRUCT(BlueprintType)
struct FFigurine : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFigurine eFigurine;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int nVie;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int nVieMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int nAttaque;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int nSoin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEffetFigurine eEffet;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int nNiveau = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int nExperience = 0;
};