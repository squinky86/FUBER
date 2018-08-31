/*
 * Copyright © 2018, Jon Hood www.hoodsecurity.com
 * License: ISC
 */

using System;

namespace BadWeakness
{
	class Bad
	{
		static void Main()
		{
			Deprecated.Deprecate("Testing Function…"); //call to deprecated function
		}
	}

	static class Deprecated
	{
		[Obsolete("Switch to using DeprecateLine(string s) instead.")]
		public static void Deprecate(string s)
		{
			Console.Write(s + Environment.NewLine);
		}

		public static void DeprecateLine(string s)
		{
			Console.WriteLine(s);
		}
	}
}
