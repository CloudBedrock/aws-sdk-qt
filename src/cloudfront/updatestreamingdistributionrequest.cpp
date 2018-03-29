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

#include "updatestreamingdistributionrequest.h"
#include "updatestreamingdistributionrequest_p.h"
#include "updatestreamingdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  UpdateStreamingDistributionRequest
 *
 * @brief  Implements CloudFront UpdateStreamingDistribution requests.
 *
 * @see    CloudFrontClient::updateStreamingDistribution
 */

/**
 * @brief  Constructs a new UpdateStreamingDistributionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateStreamingDistributionRequest::UpdateStreamingDistributionRequest(const UpdateStreamingDistributionRequest &other)
    : CloudFrontRequest(new UpdateStreamingDistributionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateStreamingDistributionRequest object.
 */
UpdateStreamingDistributionRequest::UpdateStreamingDistributionRequest()
    : CloudFrontRequest(new UpdateStreamingDistributionRequestPrivate(CloudFrontRequest::UpdateStreamingDistributionAction, this))
{

}

bool UpdateStreamingDistributionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateStreamingDistributionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateStreamingDistributionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateStreamingDistributionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateStreamingDistributionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateStreamingDistributionRequestPrivate
 *
 * @brief  Private implementation for UpdateStreamingDistributionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStreamingDistributionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public UpdateStreamingDistributionRequest instance.
 */
UpdateStreamingDistributionRequestPrivate::UpdateStreamingDistributionRequestPrivate(
    const CloudFrontRequest::Action action, UpdateStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateStreamingDistributionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateStreamingDistributionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateStreamingDistributionRequest instance.
 */
UpdateStreamingDistributionRequestPrivate::UpdateStreamingDistributionRequestPrivate(
    const UpdateStreamingDistributionRequestPrivate &other, UpdateStreamingDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
