# MediaFilterSDK for iOS

[![Swift Package Manager](https://img.shields.io/badge/SPM-compatible-brightgreen.svg)](https://swift.org/package-manager/)
[![Platform](https://img.shields.io/badge/platform-iOS%2012%2B-lightgrey.svg)](https://developer.apple.com/ios/)

The Media Trust Media Filter SDK for iOS, distributed through Swift Package Manager. The SDK
binary ships inside this package as an XCFramework, so resolving the package needs no separate
download.

## Requirements

- iOS 12.0+
- Xcode 15.0+
- Swift 5.9+

## Installation

### Xcode

1. In Xcode, choose **File → Add Package Dependencies...**
2. Enter the package URL: `https://github.com/themediatrust/ios-msdk-spm`
3. Choose your version rule (for example, "Up to Next Major Version") with `1.6.1`.
4. Click **Add Package** and link `MediaFilterSDK` to your app target.

### `Package.swift`

```swift
dependencies: [
    .package(url: "https://github.com/themediatrust/ios-msdk-spm", from: "1.6.1"),
],
targets: [
    .target(
        name: "YourApp",
        dependencies: [
            .product(name: "MediaFilterSDK", package: "ios-msdk-spm"),
        ]
    ),
]
```

## Quick Start

```swift
import MediaFilterSDK

// Initialize the SDK during app launch.
MediaFilter.initialize(token: <#CONFIGURATION_TOKEN#>, debugMode: false)
```

Your configuration token is provided by The Media Trust.

## Documentation

Full integration documentation, API reference, and release notes are provided to publishers
under separate cover. Contact your account representative for access.

## Support

For integration support, contact [support@themediatrust.com](mailto:support@themediatrust.com).

## License

Proprietary. See [LICENSE](LICENSE) for terms. Use of the SDK requires a separate written
agreement with TMT Digital, Inc.

Copyright (c) 2026 TMT Digital, Inc. All rights reserved.
