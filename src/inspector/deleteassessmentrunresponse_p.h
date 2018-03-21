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

#ifndef QTAWS_DELETEASSESSMENTRUNRESPONSE_P_H
#define QTAWS_DELETEASSESSMENTRUNRESPONSE_P_H

#include "inspectorresponse.h"
#include "deleteassessmentrunrequest.h"

namespace AWS {

namespace Inspector {

class DeleteAssessmentRunResponse;

class QTAWS_EXPORT DeleteAssessmentRunResponsePrivate : public InspectorResponsePrivate {
    Q_OBJECT

public:

    DeleteAssessmentRunResponsePrivate(DeleteAssessmentRunResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssessmentRunResponse)
    Q_DISABLE_COPY(DeleteAssessmentRunResponsePrivate)

};

} // namespace Inspector
} // namespace AWS

#endif
