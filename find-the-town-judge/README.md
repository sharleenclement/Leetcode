<h2>997. Find the Town Judge</h2><h3>Easy</h3><hr><div><p>In a town, there are <code>n</code> people labeled from <code>1</code> to <code>n</code>. There is a rumor that one of these people is secretly the town judge.</p>

<p>If the town judge exists, then:</p>

<ol>
	<li>The town judge trusts nobody.</li>
	<li>Everybody (except for the town judge) trusts the town judge.</li>
	<li>There is exactly one person that satisfies properties <strong>1</strong> and <strong>2</strong>.</li>
</ol>

<p>You are given an array <code>trust</code> where <code>trust[i] = [a<sub>i</sub>, b<sub>i</sub>]</code> representing that the person labeled <code>a<sub>i</sub></code> trusts the person labeled <code>b<sub>i</sub></code>.</p>

<p>Return <em>the label of the town judge if the town judge exists and can be identified, or return </em><code>-1</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> n = 2, trust = [[1,2]]
<strong>Output:</strong> 2
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> n = 3, trust = [[1,3],[2,3]]
<strong>Output:</strong> 3
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> n = 3, trust = [[1,3],[2,3],[3,1]]
<strong>Output:</strong> -1
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> n = 3, trust = [[1,2],[2,3]]
<strong>Output:</strong> -1
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> n = 4, trust = [[1,3],[1,4],[2,3],[2,4],[4,3]]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<p>**CONSTRAINTS HIDDEN BY EXTENSION**</p>
</div>