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

#include "gettracegraphrequest.h"
#include "gettracegraphrequest_p.h"
#include "gettracegraphresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetTraceGraphRequest
 *
 * \brief The GetTraceGraphRequest class provides an interface for XRay GetTraceGraph requests.
 *
 * \ingroup XRay
 *
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
 *
 * \sa XRayClient::getTraceGraph
 */

/*!
 * @brief  Constructs a new GetTraceGraphRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTraceGraphRequest::GetTraceGraphRequest(const GetTraceGraphRequest &other)
    : XRayRequest(new GetTraceGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTraceGraphRequest object.
 */
GetTraceGraphRequest::GetTraceGraphRequest()
    : XRayRequest(new GetTraceGraphRequestPrivate(XRayRequest::GetTraceGraphAction, this))
{

}

/*!
 * \reimp
 */
bool GetTraceGraphRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetTraceGraphResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTraceGraphResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  XRayClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTraceGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetTraceGraphResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTraceGraphRequestPrivate
 *
 * @brief  Private implementation for GetTraceGraphRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTraceGraphRequestPrivate object.
 *
 * @param  action  XRay action being performed.
 * @param  q       Pointer to this object's public GetTraceGraphRequest instance.
 */
GetTraceGraphRequestPrivate::GetTraceGraphRequestPrivate(
    const XRayRequest::Action action, GetTraceGraphRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTraceGraphRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTraceGraphRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTraceGraphRequest instance.
 */
GetTraceGraphRequestPrivate::GetTraceGraphRequestPrivate(
    const GetTraceGraphRequestPrivate &other, GetTraceGraphRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
