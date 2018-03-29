/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MEDIAPACKAGECLIENTREQUEST_P_H
#define QTAWS_MEDIAPACKAGECLIENTREQUEST_P_H

#include "mediapackage_p.h"
#include "mediapackageclientrequest.h"

namespace QtAws {
namespace MediaPackage {

class MediaPackageClientRequest;

class QTAWS_EXPORT MediaPackageClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MediaPackageClientRequest::Action action; ///< MediaPackage action to be performed.
    QString apiVersion;        ///< MediaPackage API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MediaPackage request (query string) parameters. @todo?

    MediaPackageClientRequestPrivate(const MediaPackageClientRequest::Action action, MediaPackageClientRequest * const q);
    MediaPackageClientRequestPrivate(const MediaPackageClientRequestPrivate &other, MediaPackageClientRequest * const q);

    static QString toString(const MediaPackageClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MediaPackageClientRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
