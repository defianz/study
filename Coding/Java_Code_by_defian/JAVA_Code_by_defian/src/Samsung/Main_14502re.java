package Samsung;

import java.io.BufferedWriter;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.io.IOException;

class node2 {
	int x;
	int y;

	node2(int a, int b) {
		this.x = a;
		this.y = b;
	}
}

public class Main_14502re {

	static int N, M, sol;
	static int nx, ny;
	static int[][] map;
	static int[] dx, dy;

	static void dfs(int k, int sx, int sy) {
		if (k == 3) {
			bfs();
			return;
		}

		for (int i = sx; i < N; i++) {
			for (int j = sy; j < M; j++) {
				if (map[i][j] == 0) {
					map[i][j] = 1;
					dfs(k + 1, i, j);
					map[i][j] = 0;
				}
			}
			sy = 0;
		}

	}

	static void bfs() {
		int[][] testmap = new int[N][M];
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				testmap[i][j] = map[i][j];
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (testmap[i][j] == 2) {
					node2 start = new node2(i, j);

					Queue<node2> q = new LinkedList<node2>();
					q.add(start);

					while (!q.isEmpty()) {
						node2 cur = q.poll();

						for (int dir = 0; dir < 4; dir++) {
							nx = cur.x + dx[dir];
							ny = cur.y + dy[dir];

							if (0 <= nx && nx < N && 0 <= ny && ny < M) {
								if (testmap[nx][ny] == 0) {
									testmap[nx][ny] = 2;
									node2 next = new node2(nx, ny);
									q.add(next);
								}
							}
						}

					}

				}
			}
		}
		int tmp = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (testmap[i][j] == 0) {
					tmp++;
				}
			}
		}

		if (tmp > sol) {
			sol = tmp;
		}
	}

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

		String[] line = br.readLine().split(" ");

		N = Integer.parseInt(line[0]);
		M = Integer.parseInt(line[1]);
		map = new int[N][M];

		for (int i = 0; i < N; i++) {
			String[] line2 = br.readLine().split(" ");
			for (int j = 0; j < M; j++) {
				map[i][j] = Integer.parseInt(line2[j]);
			}
		}

		dx = new int[] { 0, 0, -1, 1 };
		dy = new int[] { -1, 1, 0, 0 };
		sol = 0;

		dfs(0, 0, 0);

		bw.write(sol + "");

		br.close();
		bw.close();

	}

}
