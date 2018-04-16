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

#include "getsegmentimportjobsrequest.h"
#include "getsegmentimportjobsrequest_p.h"
#include "getsegmentimportjobsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentImportJobsRequest
 *
 * \brief The GetSegmentImportJobsRequest class encapsulates Pinpoint GetSegmentImportJobs requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getSegmentImportJobs
 */

/*!
 * @brief  Constructs a new GetSegmentImportJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSegmentImportJobsRequest::GetSegmentImportJobsRequest(const GetSegmentImportJobsRequest &other)
    : PinpointRequest(new GetSegmentImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetSegmentImportJobsRequest object.
 */
GetSegmentImportJobsRequest::GetSegmentImportJobsRequest()
    : PinpointRequest(new GetSegmentImportJobsRequestPrivate(PinpointRequest::GetSegmentImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSegmentImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetSegmentImportJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSegmentImportJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSegmentImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetSegmentImportJobsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetSegmentImportJobsRequestPrivate
 *
 * @brief  Private implementation for GetSegmentImportJobsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSegmentImportJobsRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetSegmentImportJobsRequest instance.
 */
GetSegmentImportJobsRequestPrivate::GetSegmentImportJobsRequestPrivate(
    const PinpointRequest::Action action, GetSegmentImportJobsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetSegmentImportJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSegmentImportJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSegmentImportJobsRequest instance.
 */
GetSegmentImportJobsRequestPrivate::GetSegmentImportJobsRequestPrivate(
    const GetSegmentImportJobsRequestPrivate &other, GetSegmentImportJobsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
