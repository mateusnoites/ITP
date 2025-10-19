#include <stdio.h>
#include <string.h>

int main(void) {
    int n, m;
    while (scanf("%d %d", &n, &m) == 2) {
        if (n == 0 && m == 0) break;
        
        char names[n * 10][32];
        int nameCount = 0;

        int serverLists[n * 10][n];
        int serverCounts[n * 10];
        for (int i = 0; i < n * 10; i++) {
            serverCounts[i] = 0;
        }

        for (int server = 0; server < n; server++) {
            int apps;
            scanf("%d", &apps);
            for (int j = 0; j < apps; j++) {
                char app[32];
                scanf("%s", app);
                int idx = -1;
                for (int k = 0; k < nameCount; k++) {
                    if (strcmp(names[k], app) == 0) {
                        idx = k;
                        break;
                    }
                }
                if (idx < 0) {
                    idx = nameCount++;
                    strcpy(names[idx], app);
                }
                serverLists[idx][ serverCounts[idx]++ ] = server;
            }
        }

        long long total = 0;

        for (int group = 0; group < m; group++) {
            int appsInGroup;
            scanf("%d", &appsInGroup);
            int connectedServers[n];
            int connectedCount = 0;

            for (int j = 0; j < appsInGroup; j++) {
                char app[32];
                scanf("%s", app);
                int idx = -1;
                for (int k = 0; k < nameCount; k++) {
                    if (strcmp(names[k], app) == 0) {
                        idx = k;
                        break;
                    }
                }
                if (idx < 0) continue;
                int *list = serverLists[idx];
                int cnt = serverCounts[idx];
                for (int p = 0; p < cnt; p++) {
                    int s = list[p];
                    int found = 0;
                    for (int q = 0; q < connectedCount; q++) {
                        if (connectedServers[q] == s) {
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        connectedServers[connectedCount++] = s;
                    }
                }
            }
            total += connectedCount;
        }

        printf("%lld\n", total);
    }
    return 0;
}
