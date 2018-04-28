# Let Me Check My Schedule
Maximillian is a busy guy. To waste less time, he wants to improve the speed with which he can check what appointments or events overlap a given time slot, so he can decide which is more important to attend.

Accept an input representing the events on Maximillian's radar for a day and the times he's most concerned about, and for each time produce the names of the events. Event start and end times are both *inclusive*, so a query for a time should include events which start or end at exactly that time.

## Input Format

The first line contains two integers: ***N***, denoting the number of events currently in Maximillian's schedule; and ***M***, denoting the number of queries Maximillian would like to make.

The next ***N*** lines each consist of two timestamps in the format `hh:mm` denoting the start and end time of the event, followed by the event's name.

The next ***M*** lines each consist of one timestamp in the format `hh:mm` denoting the time to query.

## Constraints

- 1 &le; ***N*** &le; 1,000
- 1 &le; ***M*** &le; 1,000
- `00` &le; `hh` &le; `23`
- `00` &le; `mm` &le; `59`

## Output Format

Print ***M*** lines of output, each with the answer to a single query. Each answer should be the queried time followed by a comma-separated list of the event names which overlap that time, or "`Nothing`" if no events overlap that time.

Events in each line should be ordered such that earlier-starting events are printed earlier. If two events start at the same time, the one with the earlier end time should be printed earlier. If two events start and end at the same time, the one listed earlier in the input should be printed earlier.

## Sample Input
```
3 3
00:00 11:59 All-Morning Monster Mash
11:30 12:29 Lunch with John Malkovich
17:00 23:59 Nap time
11:45
12:30
18:00
```
## Sample Output
```  
11:45 All-Morning Monster Mash, Lunch with John Malkovich
12:30 Nothing
18:00 Nap time
```
