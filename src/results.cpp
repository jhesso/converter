#include "converter.hpp"

void    printAnswer(double valueOriginal, double valueConverted, std::string originalUnit, std::string targetUnit)
{
    // here is where saving the results to a file should happen
    std::cout << std::endl << valueOriginal << originalUnit << " = " << valueConverted << targetUnit << std::endl;
}

void    getTarget(int identifier, int unitOriginal, int unitTarget, double valueOriginal, double valueConverted, std::string originalUnit)
{
    std::string     targetUnit;

    targetUnit = " ";
    switch (identifier)
    {
    case 1:
        switch (unitTarget)
        {
            case 1:
                targetUnit = "C";
                break;
            case 2:
                targetUnit = "F";
                break;
            case 3:
                targetUnit = "K";
                break;
            default:
                break;
        }
        break;
    case 2:
        switch (unitTarget)
        {
            case 1:
                targetUnit = "m";
                break;
            case 2:
                targetUnit = "ft";
                break;
            default:
                break;
        }
        break;
    case 3:
        switch (unitTarget)
        {
            case 1:
                targetUnit = "kg";
                break;
            case 2:
                targetUnit = "lbs";
                break;
            case 3:
                targetUnit = "st";
                break;
            default:
                break;
        }
        break;
    case 4:
        switch (unitTarget)
        {
        case 1:
            targetUnit = "mph";
            break;
        case 2:
            targetUnit = "kmh";
            break;
        default:
            break;
        }
        break;
    case 5:
        switch (unitTarget)
        {
        case 1:
            targetUnit = " square meter";
            break;
        case 2:
            targetUnit = " square feet";
            break;
        default:
            break;
        }
        break;
    case 6:
        switch (unitTarget)
        {
        case 1:
            targetUnit = "l";
            break;
        case 2:
            targetUnit = "gal";
            break;
        default:
            break;
        }
        break;
    case 7:
        switch (unitTarget)
        {
        case 1:
            targetUnit = " picoseconds";
            break;
        case 2:
            targetUnit = " nanoseconds";
            break;
        case 3:
            targetUnit = " microseconds";
            break;
        case 4:
            targetUnit = " milliseconds";
            break;
        case 5:
            targetUnit = " seconds";
            break;
        case 6:
            targetUnit = " minutes";
            break;
        case 7:
            targetUnit = " hours";
            break;
        case 8:
            targetUnit = " days";
            break;
        case 9:
            targetUnit = " weeks";
            break;
        case 10:
            targetUnit = " months";
            break;
        case 11:
            targetUnit = " years";
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
    printAnswer(valueOriginal, valueConverted, originalUnit, targetUnit);
}

void    getType(int identifier, int unitOriginal, int unitTarget, double valueOriginal, double valueConverted)
{
    std::string     originalUnit;

    originalUnit = " ";
    switch (identifier)
    {
    case 1:
        switch (unitOriginal)
        {
            case 1:
                originalUnit = "C";
                break;
            case 2:
                originalUnit = "F";
                break;
            case 3:
                originalUnit = "K";
                break;
            default:
                break;
        }
        break;
    case 2:
        switch (unitOriginal)
        {
            case 1:
                originalUnit = "m";
                break;
            case 2:
                originalUnit = "ft";
                break;
            default:
                break;
        }
        break;
    case 3:
        switch (unitOriginal)
        {
            case 1:
                originalUnit = "kg";
                break;
            case 2:
                originalUnit = "lbs";
                break;
            case 3:
                originalUnit = "st";
                break;
            default:
                break;
        }
        break;
    case 4:
        switch (unitOriginal)
        {
        case 1:
            originalUnit = "mph";
            break;
        case 2:
            originalUnit = "kmh";
            break;
        default:
            break;
        }
        break;
    case 5:
        switch (unitOriginal)
        {
        case 1:
            originalUnit = " square meter";
            break;
        case 2:
            originalUnit = " square feet";
            break;
        default:
            break;
        }
        break;
    case 6:
        switch (unitOriginal)
        {
        case 1:
            originalUnit = "l";
            break;
        case 2:
            originalUnit = "gal";
            break;
        default:
            break;
        }
        break;
    case 7:
        switch (unitOriginal)
        {
        case 1:
            originalUnit = " picoseconds";
            break;
        case 2:
            originalUnit = " nanoseconds";
            break;
        case 3:
            originalUnit = " microseconds";
            break;
        case 4:
            originalUnit = " milliseconds";
            break;
        case 5:
            originalUnit = " seconds";
            break;
        case 6:
            originalUnit = " minutes";
            break;
        case 7:
            originalUnit = " hours";
            break;
        case 8:
            originalUnit = " days";
            break;
        case 9:
            originalUnit = " weeks";
            break;
        case 10:
            originalUnit = " months";
            break;
        case 11:
            originalUnit = " years";
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
    getTarget(identifier, unitOriginal, unitTarget, valueOriginal, valueConverted, originalUnit);
}