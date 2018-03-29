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

#ifndef QTAWS_STARTBUILDREQUEST_P_H
#define QTAWS_STARTBUILDREQUEST_P_H

#include "codebuild_p.h"
#include "startbuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildRequest;

class QTAWS_EXPORT StartBuildRequestPrivate : public CodeBuildPrivate {

public:
    StartBuildRequestPrivate(const CodeBuild::Action action,
                                   StartBuildRequest * const q);
    StartBuildRequestPrivate(const StartBuildRequestPrivate &other,
                                   StartBuildRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartBuildRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
