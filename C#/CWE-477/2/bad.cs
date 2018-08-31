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
			Deprecated d = new Deprecated();
			d.DeprecatedServerName = "example.com";
			Console.WriteLine(d.ServerName);
		}
	}

	class Deprecated
	{
		private string _server;

		public string ServerName { get { return _server; } set {_server = value; } }
		[ObsoleteAttribute("Use ServerName instead.")]
		public string DeprecatedServerName { get { return _server; } set {_server = value; } }
	}
}
