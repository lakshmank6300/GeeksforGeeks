
class Solution {
    // Function to find the shortest path from a source node to all other nodes
    private ArrayList<ArrayList<Integer>> adjacencyList;
    private int src;
    private boolean[] visited;
    private int numberOfVertices;
    private int[] shortestPaths;
    private void bfs(){
        Queue<Integer> queue = new LinkedList<>();
        queue.add(src);
        shortestPaths[src] = 0;
        visited[src] = true;
        while(!queue.isEmpty()){
            int currNode = queue.peek();
            queue.remove();
            for(int i = 0; i < adjacencyList.get(currNode).size();i++){
                int neighbour = adjacencyList.get(currNode).get(i);
                if(!visited[neighbour]){
                    shortestPaths[neighbour] = shortestPaths[currNode]+1;
                    visited[neighbour] = true;
                    queue.add(neighbour);
                }
            }
        }
    }
    
    public int[] shortestPath(ArrayList<ArrayList<Integer>> adj, int src) {
        // code here
        this.src = src;
        adjacencyList = adj;
        numberOfVertices = adj.size();
        shortestPaths = new int[numberOfVertices];
        Arrays.fill(shortestPaths,-1);
        visited = new boolean[numberOfVertices];
        bfs();
        return shortestPaths;
    }
}
