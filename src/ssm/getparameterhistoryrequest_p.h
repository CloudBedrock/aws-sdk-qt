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

#ifndef QTAWS_GETPARAMETERHISTORYREQUEST_P_H
#define QTAWS_GETPARAMETERHISTORYREQUEST_P_H

#include "ssm_p.h"
#include "getparameterhistoryrequest.h"

namespace AWS {

namespace SSM {

class GetParameterHistoryRequest;

class QTAWS_EXPORT GetParameterHistoryRequestPrivate : public SSMPrivate {

public:
    GetParameterHistoryRequestPrivate(const SSM::Action action,
                                   GetParameterHistoryRequest * const q);
    GetParameterHistoryRequestPrivate(const GetParameterHistoryRequestPrivate &other,
                                   GetParameterHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetParameterHistoryRequest)

};

} // namespace SSM
} // namespace AWS

#endif
