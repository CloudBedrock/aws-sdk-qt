/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_BATCHGETPROJECTSREQUEST_P_H
#define QTAWS_BATCHGETPROJECTSREQUEST_P_H

#include "codebuild_p.h"
#include "batchgetprojectsrequest.h"

namespace AWS {

namespace CodeBuild {

class BatchGetProjectsRequest;

class QTAWS_EXPORT BatchGetProjectsRequestPrivate : public CodeBuildPrivate {

public:
    BatchGetProjectsRequestPrivate(const CodeBuild::Action action,
                                   BatchGetProjectsRequest * const q);
    BatchGetProjectsRequestPrivate(const BatchGetProjectsRequestPrivate &other,
                                   BatchGetProjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetProjectsRequest)

};

} // namespace CodeBuild
} // namespace AWS

#endif
