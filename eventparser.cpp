#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <array>
#include <cctype>
#include <cmath>
#include <compare>
#include <cstring>
#include <iostream>
#include <numeric>
#include <ranges>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <string_view>
#include <vector>
#if __has_include(<format>)
#include <format>
#define HAS_STD_FORMAT 1
#else
#define HAS_STD_FORMAT 0
#endif
#define MAX_32BIT_INT 2147483647
#ifdef _WIN32
#include <windows.h>
#define EXEC_CMD(command, mode) _popen(command, mode)
#define CLOSE_CMD(pipe) _pclose(pipe)
#else
#include <unistd.h>
#define EXEC_CMD(command, mode) popen(command, mode)
#define CLOSE_CMD(pipe) pclose(pipe)
#endif
namespace
{
typedef struct string_struct
{
    std::int64_t TimeStampInt;
    std::string AccessibilityDataSensitive;
    std::string AccessibilityFocused;
    std::string AccessibilityTool;
    std::string Action;
    std::string Active;
    std::string AddedCount;
    std::string BeforeText;
    std::string BooleanProperties;
    std::string Checked;
    std::string ClassName;
    std::string ConnectionId;
    std::string ContentChangeTypes;
    std::string ContentDescription;
    std::string ContentInvalid;
    std::string CurrentItemIndex;
    std::string Empty;
    std::string Enabled;
    std::string EventTime;
    std::string EventType;
    std::string Focused;
    std::string FromIndex;
    std::string FullScreen;
    std::string ItemCount;
    std::string Loggable;
    std::string MaxScrollX;
    std::string MaxScrollY;
    std::string MovementGranularity;
    std::string PackageName;
    std::string ParcelableData;
    std::string Password;
    std::string Records;
    std::string RemovedCount;
    std::string ScrollDeltaX;
    std::string ScrollDeltaY;
    std::string ScrollX;
    std::string ScrollY;
    std::string Scrollable;
    std::string Sealed;
    std::string Source;
    std::string SourceDisplayId;
    std::string SourceNodeId;
    std::string SourceWindowId;
    std::string SpeechStateChangeTypes;
    std::string Text;
    std::string TimeNow;
    std::string TimeStamp;
    std::string ToIndex;
    std::string WindowChangeTypes;
    std::string WindowChanges;
    std::string WindowId;
    std::string recordCount;
} s_struct;

void clear_struct(string_struct &sstru)
{
    sstru.TimeStampInt = 0;
    sstru.AccessibilityDataSensitive.clear();
    sstru.AccessibilityFocused.clear();
    sstru.AccessibilityTool.clear();
    sstru.Action.clear();
    sstru.Active.clear();
    sstru.AddedCount.clear();
    sstru.BeforeText.clear();
    sstru.BooleanProperties.clear();
    sstru.Checked.clear();
    sstru.ClassName.clear();
    sstru.ConnectionId.clear();
    sstru.ContentChangeTypes.clear();
    sstru.ContentDescription.clear();
    sstru.ContentInvalid.clear();
    sstru.CurrentItemIndex.clear();
    sstru.Empty.clear();
    sstru.Enabled.clear();
    sstru.EventTime.clear();
    sstru.EventType.clear();
    sstru.Focused.clear();
    sstru.FromIndex.clear();
    sstru.FullScreen.clear();
    sstru.ItemCount.clear();
    sstru.Loggable.clear();
    sstru.MaxScrollX.clear();
    sstru.MaxScrollY.clear();
    sstru.MovementGranularity.clear();
    sstru.PackageName.clear();
    sstru.ParcelableData.clear();
    sstru.Password.clear();
    sstru.Records.clear();
    sstru.RemovedCount.clear();
    sstru.ScrollDeltaX.clear();
    sstru.ScrollDeltaY.clear();
    sstru.ScrollX.clear();
    sstru.ScrollY.clear();
    sstru.Scrollable.clear();
    sstru.Sealed.clear();
    sstru.Source.clear();
    sstru.SourceDisplayId.clear();
    sstru.SourceNodeId.clear();
    sstru.SourceWindowId.clear();
    sstru.SpeechStateChangeTypes.clear();
    sstru.Text.clear();
    sstru.TimeNow.clear();
    sstru.TimeStamp.clear();
    sstru.ToIndex.clear();
    sstru.WindowChangeTypes.clear();
    sstru.WindowChanges.clear();
    sstru.WindowId.clear();
    sstru.recordCount.clear();
}
std::ostream &operator<<(std::ostream &os, string_struct &sstru)
{
    os << "\n--------------------------------------------\nELEMENT:\n";
    os << "TimeStampInt: " << sstru.TimeStampInt << '\n';
    os << "AccessibilityDataSensitive: " << sstru.AccessibilityDataSensitive << '\n';
    os << "AccessibilityFocused: " << sstru.AccessibilityFocused << '\n';
    os << "AccessibilityTool: " << sstru.AccessibilityTool << '\n';
    os << "Action: " << sstru.Action << '\n';
    os << "Active: " << sstru.Active << '\n';
    os << "AddedCount: " << sstru.AddedCount << '\n';
    os << "BeforeText: " << sstru.BeforeText << '\n';
    os << "BooleanProperties: " << sstru.BooleanProperties << '\n';
    os << "Checked: " << sstru.Checked << '\n';
    os << "ClassName: " << sstru.ClassName << '\n';
    os << "ConnectionId: " << sstru.ConnectionId << '\n';
    os << "ContentChangeTypes: " << sstru.ContentChangeTypes << '\n';
    os << "ContentDescription: " << sstru.ContentDescription << '\n';
    os << "ContentInvalid: " << sstru.ContentInvalid << '\n';
    os << "CurrentItemIndex: " << sstru.CurrentItemIndex << '\n';
    os << "Empty: " << sstru.Empty << '\n';
    os << "Enabled: " << sstru.Enabled << '\n';
    os << "EventTime: " << sstru.EventTime << '\n';
    os << "EventType: " << sstru.EventType << '\n';
    os << "Focused: " << sstru.Focused << '\n';
    os << "FromIndex: " << sstru.FromIndex << '\n';
    os << "FullScreen: " << sstru.FullScreen << '\n';
    os << "ItemCount: " << sstru.ItemCount << '\n';
    os << "Loggable: " << sstru.Loggable << '\n';
    os << "MaxScrollX: " << sstru.MaxScrollX << '\n';
    os << "MaxScrollY: " << sstru.MaxScrollY << '\n';
    os << "MovementGranularity: " << sstru.MovementGranularity << '\n';
    os << "PackageName: " << sstru.PackageName << '\n';
    os << "ParcelableData: " << sstru.ParcelableData << '\n';
    os << "Password: " << sstru.Password << '\n';
    os << "Records: " << sstru.Records << '\n';
    os << "RemovedCount: " << sstru.RemovedCount << '\n';
    os << "ScrollDeltaX: " << sstru.ScrollDeltaX << '\n';
    os << "ScrollDeltaY: " << sstru.ScrollDeltaY << '\n';
    os << "ScrollX: " << sstru.ScrollX << '\n';
    os << "ScrollY: " << sstru.ScrollY << '\n';
    os << "Scrollable: " << sstru.Scrollable << '\n';
    os << "Sealed: " << sstru.Sealed << '\n';
    os << "Source: " << sstru.Source << '\n';
    os << "SourceDisplayId: " << sstru.SourceDisplayId << '\n';
    os << "SourceNodeId: " << sstru.SourceNodeId << '\n';
    os << "SourceWindowId: " << sstru.SourceWindowId << '\n';
    os << "SpeechStateChangeTypes: " << sstru.SpeechStateChangeTypes << '\n';
    os << "Text: " << sstru.Text << '\n';
    os << "TimeNow: " << sstru.TimeNow << '\n';
    os << "TimeStamp: " << sstru.TimeStamp << '\n';
    os << "ToIndex: " << sstru.ToIndex << '\n';
    os << "WindowChangeTypes: " << sstru.WindowChangeTypes << '\n';
    os << "WindowChanges: " << sstru.WindowChanges << '\n';
    os << "WindowId: " << sstru.WindowId << '\n';
    os << "recordCount: " << sstru.recordCount << '\n';

    return os;
}

static constexpr std::array<std::string_view, 160> splitat{
    "0 EventType: ",
    "1 EventType: ",
    "2 EventType: ",
    "3 EventType: ",
    "4 EventType: ",
    "5 EventType: ",
    "6 EventType: ",
    "7 EventType: ",
    "8 EventType: ",
    "9 EventType: ",
    "; AccessibilityDataSensitive: ",
    "; AccessibilityFocused: ",
    "; AccessibilityTool: ",
    "; Action: ",
    "; Active: ",
    "; AddedCount: ",
    "; BeforeText: ",
    "; BooleanProperties: ",
    "; Checked: ",
    "; ClassName: ",
    "; ConnectionId: ",
    "; ContentChangeTypes: ",
    "; ContentDescription: ",
    "; ContentInvalid: ",
    "; CurrentItemIndex: ",
    "; Empty: ",
    "; Enabled: ",
    "; EventTime: ",
    "; EventType: ",
    "; Focused: ",
    "; FromIndex: ",
    "; FullScreen: ",
    "; ItemCount: ",
    "; Loggable: ",
    "; MaxScrollX: ",
    "; MaxScrollY: ",
    "; MovementGranularity: ",
    "; PackageName: ",
    "; ParcelableData: ",
    "; Password: ",
    "; Records: ",
    "; RemovedCount: ",
    "; ScrollDeltaX: ",
    "; ScrollDeltaY: ",
    "; ScrollX: ",
    "; ScrollY: ",
    "; Scrollable: ",
    "; Sealed: ",
    "; Source: ",
    "; SourceDisplayId: ",
    "; SourceNodeId: ",
    "; SourceWindowId: ",
    "; SpeechStateChangeTypes: ",
    "; Text: ",
    "; ToIndex: ",
    "; WindowChangeTypes: ",
    "; WindowChanges: ",
    "; WindowId: ",
    "; TimeNow: ",
    "; recordCount: ",
    "[ AccessibilityDataSensitive: ",
    "[ AccessibilityFocused: ",
    "[ AccessibilityTool: ",
    "[ Action: ",
    "[ Active: ",
    "[ AddedCount: ",
    "[ BeforeText: ",
    "[ BooleanProperties: ",
    "[ Checked: ",
    "[ ClassName: ",
    "[ ConnectionId: ",
    "[ ContentChangeTypes: ",
    "[ ContentDescription: ",
    "[ ContentInvalid: ",
    "[ CurrentItemIndex: ",
    "[ Empty: ",
    "[ Enabled: ",
    "[ EventTime: ",
    "[ EventType: ",
    "[ Focused: ",
    "[ FromIndex: ",
    "[ FullScreen: ",
    "[ ItemCount: ",
    "[ Loggable: ",
    "[ MaxScrollX: ",
    "[ MaxScrollY: ",
    "[ MovementGranularity: ",
    "[ PackageName: ",
    "[ ParcelableData: ",
    "[ Password: ",
    "[ Records: ",
    "[ RemovedCount: ",
    "[ ScrollDeltaX: ",
    "[ ScrollDeltaY: ",
    "[ ScrollX: ",
    "[ ScrollY: ",
    "[ Scrollable: ",
    "[ Sealed: ",
    "[ Source: ",
    "[ SourceDisplayId: ",
    "[ SourceNodeId: ",
    "[ SourceWindowId: ",
    "[ SpeechStateChangeTypes: ",
    "[ Text: ",
    "[ ToIndex: ",
    "[ WindowChangeTypes: ",
    "[ WindowChanges: ",
    "[ WindowId: ",
    "[ TimeNow: ",
    "[ recordCount: ",
    " AccessibilityDataSensitive: ",
    " AccessibilityFocused: ",
    " AccessibilityTool: ",
    " Action: ",
    " Active: ",
    " AddedCount: ",
    " BeforeText: ",
    " BooleanProperties: ",
    " Checked: ",
    " ClassName: ",
    " ConnectionId: ",
    " ContentChangeTypes: ",
    " ContentDescription: ",
    " ContentInvalid: ",
    " CurrentItemIndex: ",
    " Empty: ",
    " Enabled: ",
    " EventTime: ",
    " EventType: ",
    " Focused: ",
    " FromIndex: ",
    " FullScreen: ",
    " ItemCount: ",
    " Loggable: ",
    " MaxScrollX: ",
    " MaxScrollY: ",
    " MovementGranularity: ",
    " PackageName: ",
    " ParcelableData: ",
    " Password: ",
    " Records: ",
    " RemovedCount: ",
    " ScrollDeltaX: ",
    " ScrollDeltaY: ",
    " ScrollX: ",
    " ScrollY: ",
    " Scrollable: ",
    " Sealed: ",
    " Source: ",
    " SourceDisplayId: ",
    " SourceNodeId: ",
    " SourceWindowId: ",
    " SpeechStateChangeTypes: ",
    " Text: ",
    " TimeNow: ",
    " ToIndex: ",
    " WindowChangeTypes: ",
    " WindowChanges: ",
    " WindowId: ",
    " recordCount: ",
};
static constexpr std::string_view sv_AccessibilityDataSensitive{"AccessibilityDataSensitive"};
static constexpr std::string_view sv_AccessibilityFocused{"AccessibilityFocused"};
static constexpr std::string_view sv_AccessibilityTool{"AccessibilityTool"};
static constexpr std::string_view sv_Action{"Action"};
static constexpr std::string_view sv_Active{"Active"};
static constexpr std::string_view sv_AddedCount{"AddedCount"};
static constexpr std::string_view sv_BeforeText{"BeforeText"};
static constexpr std::string_view sv_BooleanProperties{"BooleanProperties"};
static constexpr std::string_view sv_Checked{"Checked"};
static constexpr std::string_view sv_ClassName{"ClassName"};
static constexpr std::string_view sv_ConnectionId{"ConnectionId"};
static constexpr std::string_view sv_ContentChangeTypes{"ContentChangeTypes"};
static constexpr std::string_view sv_ContentDescription{"ContentDescription"};
static constexpr std::string_view sv_ContentInvalid{"ContentInvalid"};
static constexpr std::string_view sv_CurrentItemIndex{"CurrentItemIndex"};
static constexpr std::string_view sv_Empty{"Empty"};
static constexpr std::string_view sv_Enabled{"Enabled"};
static constexpr std::string_view sv_EventTime{"EventTime"};
static constexpr std::string_view sv_EventType{"EventType"};
static constexpr std::string_view sv_Focused{"Focused"};
static constexpr std::string_view sv_FromIndex{"FromIndex"};
static constexpr std::string_view sv_FullScreen{"FullScreen"};
static constexpr std::string_view sv_ItemCount{"ItemCount"};
static constexpr std::string_view sv_Loggable{"Loggable"};
static constexpr std::string_view sv_MaxScrollX{"MaxScrollX"};
static constexpr std::string_view sv_MaxScrollY{"MaxScrollY"};
static constexpr std::string_view sv_MovementGranularity{"MovementGranularity"};
static constexpr std::string_view sv_PackageName{"PackageName"};
static constexpr std::string_view sv_ParcelableData{"ParcelableData"};
static constexpr std::string_view sv_Password{"Password"};
static constexpr std::string_view sv_Records{"Records"};
static constexpr std::string_view sv_RemovedCount{"RemovedCount"};
static constexpr std::string_view sv_ScrollDeltaX{"ScrollDeltaX"};
static constexpr std::string_view sv_ScrollDeltaY{"ScrollDeltaY"};
static constexpr std::string_view sv_ScrollX{"ScrollX"};
static constexpr std::string_view sv_ScrollY{"ScrollY"};
static constexpr std::string_view sv_Scrollable{"Scrollable"};
static constexpr std::string_view sv_Sealed{"Sealed"};
static constexpr std::string_view sv_Source{"Source"};
static constexpr std::string_view sv_SourceDisplayId{"SourceDisplayId"};
static constexpr std::string_view sv_SourceNodeId{"SourceNodeId"};
static constexpr std::string_view sv_SourceWindowId{"SourceWindowId"};
static constexpr std::string_view sv_SpeechStateChangeTypes{"SpeechStateChangeTypes"};
static constexpr std::string_view sv_Text{"Text"};
static constexpr std::string_view sv_TimeNow{"TimeNow"};
static constexpr std::string_view sv_TimeStamp{"TimeStamp"};
static constexpr std::string_view sv_ToIndex{"ToIndex"};
static constexpr std::string_view sv_WindowChangeTypes{"WindowChangeTypes"};
static constexpr std::string_view sv_WindowChanges{"WindowChanges"};
static constexpr std::string_view sv_WindowId{"WindowId"};
static constexpr std::string_view sv_recordCount{"recordCount"};
static constexpr std::string_view sv_doppelpunkt{":"};
static constexpr std::string_view delim_csv{"\",\""};
void lstripspaces(std::string &s)
{
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](char ch) { return !std::isspace(ch); }));
}

void rstripspaces(std::string &s)
{
    s.erase(std::find_if(s.rbegin(), s.rend(), [](char ch) { return !std::isspace(ch); }).base(), s.end());
}

void rstriptrash(std::string &s)
{
    s.erase(std::find_if(s.rbegin(), s.rend(),
                         [](char ch) { return ((ch != ']') && (ch != ' ') && (ch != '\n') && (ch != '[')); })
                .base(),
            s.end());
}

void replx(std::string &haystack)
{
    lstripspaces(haystack);
    rstripspaces(haystack);
    size_t oldsize = haystack.size();
    rstriptrash(haystack);
    size_t newsize = haystack.size();
    if (oldsize != newsize)
    {
        std::string::iterator it{haystack.begin()};
        while (it != haystack.end())
        {
            if (*it == '[')
            {
                *it = ' ';
            }

            ++it;
        }
        rstriptrash(haystack);
    }
}
void replace_space_with_new_line(std::string &haystack)
{
    size_t pos = 0;
    for (const auto &tag : splitat)
    {
        pos = haystack.find(tag);
        if (pos != std::string::npos)
        {
            haystack[pos] = '\n';
        }
    }
    replx(haystack);
}
int64_t convert_to_unix_timestamp(std::string_view date_string, tm *current_tm, tm &tm)
{

    int milliseconds;
    int64_t timestamp_with_milliseconds;
    int64_t unix_time;
    time_t current_time;
    std::string dastri;
    memset(&tm, 0, sizeof(tm));
    tm.tm_mon = std::atoll(date_string.substr(0, 2).data()) - 1;
    tm.tm_mday = std::atoll(date_string.substr(3, 2).data());
    tm.tm_hour = std::atoll(date_string.substr(6, 2).data());
    tm.tm_min = std::atoll(date_string.substr(9, 2).data());
    tm.tm_sec = std::atoll(date_string.substr(12, 2).data());
    milliseconds = std::atoll(date_string.substr(15, 3).data());
    tm.tm_isdst = -1;
    current_time = time(NULL);
    current_tm = localtime(&current_time);
    tm.tm_year = current_tm->tm_year;
    unix_time = mktime(&tm);
    timestamp_with_milliseconds = unix_time * 1000 + milliseconds;
    return timestamp_with_milliseconds;
}

bool isspace_or_empty(const std::string_view &s)
{
    return s.empty() || std::all_of(s.begin(), s.end(), ::isspace);
}

std::string dump_csv(string_struct &it)
{
    std::string outputstring;
    outputstring.reserve((size_t)((double)sizeof(it) * 1.3));
#if HAS_STD_FORMAT
    outputstring.append(std::format(
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}"
        "\",\"{}"
        "\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}"
        "\",\"{}\",\"{}\",\"{}\",\"{}\"\n",
        it.TimeStampInt, it.AccessibilityDataSensitive, it.AccessibilityFocused, it.AccessibilityTool, it.Action,
        it.Active, it.AddedCount, it.BeforeText, it.BooleanProperties, it.Checked, it.ClassName, it.ConnectionId,
        it.ContentChangeTypes, it.ContentDescription, it.ContentInvalid, it.CurrentItemIndex, it.Empty, it.Enabled,
        it.EventTime, it.EventType, it.Focused, it.FromIndex, it.FullScreen, it.ItemCount, it.Loggable, it.MaxScrollX,
        it.MaxScrollY, it.MovementGranularity, it.PackageName, it.ParcelableData, it.Password, it.Records,
        it.RemovedCount, it.ScrollDeltaX, it.ScrollDeltaY, it.ScrollX, it.ScrollY, it.Scrollable, it.Sealed, it.Source,
        it.SourceDisplayId, it.SourceNodeId, it.SourceWindowId, it.SpeechStateChangeTypes, it.Text, it.TimeNow,
        it.TimeStamp, it.ToIndex, it.WindowChangeTypes, it.WindowChanges, it.WindowId, it.recordCount));
#else
    outputstring += '"';
    outputstring.append(std::to_string(it.TimeStampInt));
    outputstring.append(delim_csv);
    outputstring.append(it.AccessibilityDataSensitive);
    outputstring.append(delim_csv);
    outputstring.append(it.AccessibilityFocused);
    outputstring.append(delim_csv);
    outputstring.append(it.AccessibilityTool);
    outputstring.append(delim_csv);
    outputstring.append(it.Action);
    outputstring.append(delim_csv);
    outputstring.append(it.Active);
    outputstring.append(delim_csv);
    outputstring.append(it.AddedCount);
    outputstring.append(delim_csv);
    outputstring.append(it.BeforeText);
    outputstring.append(delim_csv);
    outputstring.append(it.BooleanProperties);
    outputstring.append(delim_csv);
    outputstring.append(it.Checked);
    outputstring.append(delim_csv);
    outputstring.append(it.ClassName);
    outputstring.append(delim_csv);
    outputstring.append(it.ConnectionId);
    outputstring.append(delim_csv);
    outputstring.append(it.ContentChangeTypes);
    outputstring.append(delim_csv);
    outputstring.append(it.ContentDescription);
    outputstring.append(delim_csv);
    outputstring.append(it.ContentInvalid);
    outputstring.append(delim_csv);
    outputstring.append(it.CurrentItemIndex);
    outputstring.append(delim_csv);
    outputstring.append(it.Empty);
    outputstring.append(delim_csv);
    outputstring.append(it.Enabled);
    outputstring.append(delim_csv);
    outputstring.append(it.EventTime);
    outputstring.append(delim_csv);
    outputstring.append(it.EventType);
    outputstring.append(delim_csv);
    outputstring.append(it.Focused);
    outputstring.append(delim_csv);
    outputstring.append(it.FromIndex);
    outputstring.append(delim_csv);
    outputstring.append(it.FullScreen);
    outputstring.append(delim_csv);
    outputstring.append(it.ItemCount);
    outputstring.append(delim_csv);
    outputstring.append(it.Loggable);
    outputstring.append(delim_csv);
    outputstring.append(it.MaxScrollX);
    outputstring.append(delim_csv);
    outputstring.append(it.MaxScrollY);
    outputstring.append(delim_csv);
    outputstring.append(it.MovementGranularity);
    outputstring.append(delim_csv);
    outputstring.append(it.PackageName);
    outputstring.append(delim_csv);
    outputstring.append(it.ParcelableData);
    outputstring.append(delim_csv);
    outputstring.append(it.Password);
    outputstring.append(delim_csv);
    outputstring.append(it.Records);
    outputstring.append(delim_csv);
    outputstring.append(it.RemovedCount);
    outputstring.append(delim_csv);
    outputstring.append(it.ScrollDeltaX);
    outputstring.append(delim_csv);
    outputstring.append(it.ScrollDeltaY);
    outputstring.append(delim_csv);
    outputstring.append(it.ScrollX);
    outputstring.append(delim_csv);
    outputstring.append(it.ScrollY);
    outputstring.append(delim_csv);
    outputstring.append(it.Scrollable);
    outputstring.append(delim_csv);
    outputstring.append(it.Sealed);
    outputstring.append(delim_csv);
    outputstring.append(it.Source);
    outputstring.append(delim_csv);
    outputstring.append(it.SourceDisplayId);
    outputstring.append(delim_csv);
    outputstring.append(it.SourceNodeId);
    outputstring.append(delim_csv);
    outputstring.append(it.SourceWindowId);
    outputstring.append(delim_csv);
    outputstring.append(it.SpeechStateChangeTypes);
    outputstring.append(delim_csv);
    outputstring.append(it.Text);
    outputstring.append(delim_csv);
    outputstring.append(it.TimeNow);
    outputstring.append(delim_csv);
    outputstring.append(it.TimeStamp);
    outputstring.append(delim_csv);
    outputstring.append(it.ToIndex);
    outputstring.append(delim_csv);
    outputstring.append(it.WindowChangeTypes);
    outputstring.append(delim_csv);
    outputstring.append(it.WindowChanges);
    outputstring.append(delim_csv);
    outputstring.append(it.WindowId);
    outputstring.append(delim_csv);
    outputstring.append(it.recordCount);
    outputstring += '"';
    outputstring += '\n';

#endif
    return outputstring;
}

} // namespace
int parse_uiautomator_events_lines(FILE *pipe)

{
    constexpr size_t size_my_buffer = 128;

    char buffer[size_my_buffer]{};

    std::string cpptmpstring;
    cpptmpstring.reserve(1024);

    string_struct tempstruct{};
    std::string key(32, ' ');
    std::string value(128, ' ');
    std::string r2(512, ' ');
    std::string r;
    r.reserve(2048);
    bool foundstamp = false;
    tm struct_tm{};
    time_t current_time = time(NULL);
    tm *current_tm = localtime(&current_time);
    struct_tm.tm_year = current_tm->tm_year;

    while (fgets(buffer, size_my_buffer, pipe) != NULL)
    {
        for (int i = 0; i < size_my_buffer; i++)
        {
            if (buffer[i] == '\0')
            {
                continue;
            }
            if (buffer[i] == '\n')
            {
                buffer[i] = '\0';
#ifdef _WIN32
                if (cpptmpstring.back() == '\r')
                {
                    cpptmpstring.pop_back();
                }
#endif
                r.append(cpptmpstring);
                cpptmpstring.clear();
            }
            else
            {
                cpptmpstring += buffer[i];
                buffer[i] = '\0';
            }
        }
        if (r.empty())
        {
            continue;
        }
        clear_struct(tempstruct);
        replace_space_with_new_line(r);
        auto strss = r | std::views::split('\n');
        foundstamp = false;
        for (const auto &rref : strss)
        {
            r2.clear();
            r2.append({rref.begin(), rref.end()});
            replx(r2);
            if (!isspace_or_empty(r2))
            {
                if ((r2.size() > 16) &&
                    (r2[2] == '-' && r2[5] == ' ' && r2[8] == ':' && r2[11] == ':' && r2[14] == '.'))
                {
                    char lasttimestring{' '};
                    if (r.size() > 18)
                    {
                        lasttimestring = r[17];
                        foundstamp = true;
                    }
                    tempstruct.TimeStamp = r2 + lasttimestring;
                    tempstruct.TimeStampInt = convert_to_unix_timestamp(tempstruct.TimeStamp, current_tm, struct_tm);
                }

                else
                {
                    size_t colpos = r2.find(sv_doppelpunkt);
                    if (colpos != std::string::npos)
                    {
                        key.clear();
                        value.clear();
                        key.append(r2.substr(0, colpos));
                        if (r2.size() > (colpos + 1))
                        {
                            value.append(r2.substr(colpos + 1));
                            lstripspaces(value);
                        }
                        if (key == sv_AccessibilityDataSensitive)
                        {
                            tempstruct.AccessibilityDataSensitive = value;
                        }
                        else if (key == sv_AccessibilityFocused)
                        {
                            tempstruct.AccessibilityFocused = value;
                        }
                        else if (key == sv_AccessibilityTool)
                        {
                            tempstruct.AccessibilityTool = value;
                        }
                        else if (key == sv_Action)
                        {
                            tempstruct.Action = value;
                        }
                        else if (key == sv_Active)
                        {
                            tempstruct.Active = value;
                        }
                        else if (key == sv_AddedCount)
                        {
                            tempstruct.AddedCount = value;
                        }
                        else if (key == sv_BeforeText)
                        {
                            tempstruct.BeforeText = value;
                        }
                        else if (key == sv_BooleanProperties)
                        {
                            tempstruct.BooleanProperties = value;
                        }
                        else if (key == sv_Checked)
                        {
                            tempstruct.Checked = value;
                        }
                        else if (key == sv_ClassName)
                        {
                            tempstruct.ClassName = value;
                        }
                        else if (key == sv_ConnectionId)
                        {
                            tempstruct.ConnectionId = value;
                        }
                        else if (key == sv_ContentChangeTypes)
                        {
                            tempstruct.ContentChangeTypes = value;
                        }
                        else if (key == sv_ContentDescription)
                        {
                            tempstruct.ContentDescription = value;
                        }
                        else if (key == sv_ContentInvalid)
                        {
                            tempstruct.ContentInvalid = value;
                        }
                        else if (key == sv_CurrentItemIndex)
                        {
                            tempstruct.CurrentItemIndex = value;
                        }
                        else if (key == sv_Empty)
                        {
                            tempstruct.Empty = value;
                        }
                        else if (key == sv_Enabled)
                        {
                            tempstruct.Enabled = value;
                        }
                        else if (key == sv_EventTime)
                        {
                            tempstruct.EventTime = value;
                        }
                        else if (key == sv_EventType)
                        {
                            tempstruct.EventType = value;
                        }
                        else if (key == sv_Focused)
                        {
                            tempstruct.Focused = value;
                        }
                        else if (key == sv_FromIndex)
                        {
                            tempstruct.FromIndex = value;
                        }
                        else if (key == sv_FullScreen)
                        {
                            tempstruct.FullScreen = value;
                        }
                        else if (key == sv_ItemCount)
                        {
                            tempstruct.ItemCount = value;
                        }
                        else if (key == sv_Loggable)
                        {
                            tempstruct.Loggable = value;
                        }
                        else if (key == sv_MaxScrollX)
                        {
                            tempstruct.MaxScrollX = value;
                        }
                        else if (key == sv_MaxScrollY)
                        {
                            tempstruct.MaxScrollY = value;
                        }
                        else if (key == sv_MovementGranularity)
                        {
                            tempstruct.MovementGranularity = value;
                        }
                        else if (key == sv_PackageName)
                        {
                            tempstruct.PackageName = value;
                        }
                        else if (key == sv_ParcelableData)
                        {
                            tempstruct.ParcelableData = value;
                        }
                        else if (key == sv_Password)
                        {
                            tempstruct.Password = value;
                        }
                        else if (key == sv_Records)
                        {
                            tempstruct.Records = value;
                        }
                        else if (key == sv_RemovedCount)
                        {
                            tempstruct.RemovedCount = value;
                        }
                        else if (key == sv_ScrollDeltaX)
                        {
                            tempstruct.ScrollDeltaX = value;
                        }
                        else if (key == sv_ScrollDeltaY)
                        {
                            tempstruct.ScrollDeltaY = value;
                        }
                        else if (key == sv_ScrollX)
                        {
                            tempstruct.ScrollX = value;
                        }
                        else if (key == sv_ScrollY)
                        {
                            tempstruct.ScrollY = value;
                        }
                        else if (key == sv_Scrollable)
                        {
                            tempstruct.Scrollable = value;
                        }
                        else if (key == sv_Sealed)
                        {
                            tempstruct.Sealed = value;
                        }
                        else if (key == sv_Source)
                        {
                            tempstruct.Source = value;
                        }
                        else if (key == sv_SourceDisplayId)
                        {
                            tempstruct.SourceDisplayId = value;
                        }
                        else if (key == sv_SourceNodeId)
                        {
                            tempstruct.SourceNodeId = value;
                        }
                        else if (key == sv_SourceWindowId)
                        {
                            tempstruct.SourceWindowId = value;
                        }
                        else if (key == sv_SpeechStateChangeTypes)
                        {
                            tempstruct.SpeechStateChangeTypes = value;
                        }
                        else if (key == sv_Text)
                        {
                            tempstruct.Text = value;
                        }
                        else if (key == sv_TimeNow)
                        {
                            tempstruct.TimeNow = value;
                        }
                        else if (key == sv_TimeStamp)
                        {
                            tempstruct.TimeStamp = value;
                        }
                        else if (key == sv_ToIndex)
                        {
                            tempstruct.ToIndex = value;
                        }
                        else if (key == sv_WindowChangeTypes)
                        {
                            tempstruct.WindowChangeTypes = value;
                        }
                        else if (key == sv_WindowChanges)
                        {
                            tempstruct.WindowChanges = value;
                        }
                        else if (key == sv_WindowId)
                        {
                            tempstruct.WindowId = value;
                        }
                        else if (key == sv_recordCount)
                        {
                            tempstruct.recordCount = value;
                        }
                    }
                }
            }
        }
        if (foundstamp)
        {
            std::cout << dump_csv(tempstruct);
        }
        r.clear();
    }
    free(current_tm);
    return 0;
}
int main(int argc, char *argv[])
{
    std::string cmd;
    if (argc < 2)
    {
        cmd = "uiautomator events";
        /* zig c++ -std=c++2a -O3 -g0 eventparser.cpp && a "adb -s 127.0.0.1:5565 shell uiautomator events" */
    }
    else
    {
        cmd = argv[1];
    }
    FILE *pipe = EXEC_CMD(cmd.c_str(), "r");
    if (!pipe)
    {
        std::cerr << "ERROR: failed to execute command: " << cmd << std::endl;
        return 1;
    }
    int returnval = parse_uiautomator_events_lines(pipe);
    fclose(pipe);
    return returnval;
}
