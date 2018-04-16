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

#include "updateitemrequest.h"
#include "updateitemrequest_p.h"
#include "updateitemresponse.h"
#include "dynamodbrequest_p.h"

namespace QtAws {
namespace DynamoDB {

/*!
 * \class QtAws::DynamoDB::UpdateItemRequest
 *
 * \brief The UpdateItemRequest class provides an interface for DynamoDB UpdateItem requests.
 *
 * \ingroup DynamoDB
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB is a fully managed NoSQL database service that provides fast and predictable performance with seamless
 *  scalability. DynamoDB lets you offload the administrative burdens of operating and scaling a distributed database, so
 *  that you don't have to worry about hardware provisioning, setup and configuration, replication, software patching, or
 *  cluster
 * 
 *  scaling>
 * 
 *  With DynamoDB, you can create database tables that can store and retrieve any amount of data, and serve any level of
 *  request traffic. You can scale up or scale down your tables' throughput capacity without downtime or performance
 *  degradation, and use the AWS Management Console to monitor resource utilization and performance
 * 
 *  metrics>
 * 
 *  DynamoDB automatically spreads the data and traffic for your tables over a sufficient number of servers to handle your
 *  throughput and storage requirements, while maintaining consistent and fast performance. All of your data is stored on
 *  solid state disks (SSDs) and automatically replicated across multiple Availability Zones in an AWS region, providing
 *  built-in high availability and data durability.
 *
 * \sa DynamoDBClient::updateItem
 */

/*!
 * @brief  Constructs a new UpdateItemRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateItemRequest::UpdateItemRequest(const UpdateItemRequest &other)
    : DynamoDBRequest(new UpdateItemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateItemRequest object.
 */
UpdateItemRequest::UpdateItemRequest()
    : DynamoDBRequest(new UpdateItemRequestPrivate(DynamoDBRequest::UpdateItemAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateItemRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateItemResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateItemResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateItemRequest::response(QNetworkReply * const reply) const
{
    return new UpdateItemResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateItemRequestPrivate
 *
 * @brief  Private implementation for UpdateItemRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateItemRequestPrivate object.
 *
 * @param  action  DynamoDB action being performed.
 * @param  q       Pointer to this object's public UpdateItemRequest instance.
 */
UpdateItemRequestPrivate::UpdateItemRequestPrivate(
    const DynamoDBRequest::Action action, UpdateItemRequest * const q)
    : DynamoDBRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateItemRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateItemRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateItemRequest instance.
 */
UpdateItemRequestPrivate::UpdateItemRequestPrivate(
    const UpdateItemRequestPrivate &other, UpdateItemRequest * const q)
    : DynamoDBRequestPrivate(other, q)
{

}

} // namespace DynamoDB
} // namespace QtAws
