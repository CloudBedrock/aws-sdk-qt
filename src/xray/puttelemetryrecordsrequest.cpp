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

#include "puttelemetryrecordsrequest.h"
#include "puttelemetryrecordsrequest_p.h"
#include "puttelemetryrecordsresponse.h"
#include "xrayrequest_p.h"

namespace AWS {
namespace XRay {

/**
 * @class  PutTelemetryRecordsRequest
 *
 * @brief  Implements XRay PutTelemetryRecords requests.
 *
 * @see    XRayClient::putTelemetryRecords
 */

/**
 * @brief  Constructs a new PutTelemetryRecordsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutTelemetryRecordsResponse::PutTelemetryRecordsResponse(

/**
 * @brief  Constructs a new PutTelemetryRecordsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutTelemetryRecordsRequest::PutTelemetryRecordsRequest(const PutTelemetryRecordsRequest &other)
    : XRayRequest(new PutTelemetryRecordsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutTelemetryRecordsRequest object.
 */
PutTelemetryRecordsRequest::PutTelemetryRecordsRequest()
    : XRayRequest(new PutTelemetryRecordsRequestPrivate(XRayRequest::PutTelemetryRecordsAction, this))
{

}

bool PutTelemetryRecordsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutTelemetryRecordsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutTelemetryRecordsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  XRayClient::send
 */
AwsAbstractResponse * PutTelemetryRecordsRequest::response(QNetworkReply * const reply) const
{
    return new PutTelemetryRecordsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutTelemetryRecordsRequestPrivate
 *
 * @brief  Private implementation for PutTelemetryRecordsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutTelemetryRecordsRequestPrivate object.
 *
 * @param  action  XRay action being performed.
 * @param  q       Pointer to this object's public PutTelemetryRecordsRequest instance.
 */
PutTelemetryRecordsRequestPrivate::PutTelemetryRecordsRequestPrivate(
    const XRayRequest::Action action, PutTelemetryRecordsRequest * const q)
    : PutTelemetryRecordsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutTelemetryRecordsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutTelemetryRecordsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutTelemetryRecordsRequest instance.
 */
PutTelemetryRecordsRequestPrivate::PutTelemetryRecordsRequestPrivate(
    const PutTelemetryRecordsRequestPrivate &other, PutTelemetryRecordsRequest * const q)
    : PutTelemetryRecordsPrivate(other, q)
{

}

} // namespace XRay
} // namespace AWS
